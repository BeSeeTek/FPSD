/*
 * fspd.cpp
 *
 *  Created on: 03.03.2021
 *      Author: benes
 */

#include "fspd.h"

fpstepper::fpstepper(int SHIFTSS, int MR, int DACSS, int LDAC,int BUFFEN, int32_t pos,
		float stepToDeg, uint8_t currentLimit) {
	//set member variables
	_SHIFTSS = SHIFTSS;
	_MR = MR;
	_DACSS = DACSS;
	_LDAC = LDAC;
	_BUFFEN = BUFFEN;
	_pos = pos;
	_stepToDeg = stepToDeg;
	_currentLimit = currentLimit;

}

void fpstepper::setup() {
	// set pinmodes
	pinMode(_SHIFTSS, OUTPUT);
	pinMode(_MR, OUTPUT);
	pinMode(_DACSS, OUTPUT);
	pinMode(_LDAC, OUTPUT);
	pinMode(_BUFFEN, OUTPUT);
	//Init SPi interface
	SPI.begin();
	SPI.beginTransaction(_dacSPISettings);
	//Set CS and Buffer eneable pins
	digitalWrite(_BUFFEN, LOW);
	digitalWrite(_DACSS, LOW);
	//genereate adc controal word see Datasheet https://www.mouser.de/datasheet/2/256/MAX5258-MAX5259-1515631.pdf S. 12
	//XXXXX100+8-bit DAC data X Loads all DACs with the same data
	uint16_t dacControalword = 0x0400 | (uint16_t)_currentLimit;
	//wirte 16 Bit Word to SPI Bus
	SPI.transfer16(dacControalword);
	SPI.endTransaction();

	digitalWrite(_DACSS, HIGH);
	//Toggle LDAC pin to set DAC output
	digitalWrite(_LDAC, LOW);
	digitalWrite(_LDAC, HIGH);
	//Disable Buffer
	digitalWrite(_BUFFEN, HIGH);
	return;
}

void fpstepper::writeHBridge(uint8_t step) {
	//TODO wirte actual controll words to this array
	const uint8_t hBridgeControlWords[30] = {
			0x00, 0x61, 0x5D,
			0x00, 0x6A, 0x1D,
			0x00, 0x6B, 0x85,
			0x00, 0x6B, 0xA8,
			0x00, 0x0B, 0xAE,
			0x00, 0x51, 0xAE,
			0x00, 0x56, 0x2E,
			0x00, 0x57, 0x46,
			0x00, 0x57, 0x58,
			0x00, 0x07, 0x5D};
	//configure SPI Bus
	SPI.beginTransaction(_shiftSPISettings);
	//activate Chipselct and buffer enable
	digitalWrite(_BUFFEN, LOW);
	digitalWrite(_SHIFTSS, LOW);
	//write coresponding data to the bus
	//see the data for 3 step in this file data_on_bus_stepp3_example.PNG
	//the array has 30 elements we have 10 steps and 3 shift registers so wee need 30 bytes for evry step
	//the byte order is Shift3,SHIFT2,SHIFT1 since the data are shifted through the registers
	uint8_t *addr = (uint8_t*) hBridgeControlWords + (step * 3);
	SPI.transfer(addr, 3);
	SPI.endTransaction();
	//deactivate Chipselct and buffer enable
	digitalWrite(_SHIFTSS, HIGH);
	digitalWrite(_BUFFEN, HIGH);
}

void fpstepper::forward() {
	_pos++;
	uint8_t step = _pos % 10;
	writeHBridge(step);
}

void fpstepper::backward() {
	_pos--;
	uint8_t step = _pos % 10;
	writeHBridge(step);
}

float fpstepper::getAng() {
	return (float) _pos / _stepToDeg;
}

void fpstepper::setCurrentLimit(uint8_t currentLimit){
	_currentLimit = currentLimit;
	SPI.beginTransaction(_dacSPISettings);
	//Set CS and Buffer eneable pins
	digitalWrite(_BUFFEN, LOW);
	digitalWrite(_DACSS, LOW);
	//genereate adc controal word see Datasheet https://www.mouser.de/datasheet/2/256/MAX5258-MAX5259-1515631.pdf S. 12
	//XXXXX100+8-bit DAC data X Loads all DACs with the same data
	uint16_t dacControalword = 0x0400 | (uint16_t)_currentLimit;
	//wirte 16 Bit Word to SPI Bus
	SPI.transfer16(dacControalword);
	SPI.endTransaction();

	digitalWrite(_DACSS, HIGH);
	//Toggle LDAC pin to set DAC output
	digitalWrite(_LDAC, LOW);
	digitalWrite(_LDAC, HIGH);
	//Disable Buffer
	digitalWrite(_BUFFEN, HIGH);
}

void fpstepper::testBridge(uint8_t bridge,bool direction)//direction ==true-->forward
{
	const uint8_t hBridgeTestControlWords[36] = {
			0x00,0x00,0x00,//1st Bridge backwards
			0x00,0x00,0x00,//1st Bridge forwards
			0x00,0x00,0x00,//2nd Bridge backwards
			0x00,0x00,0x00,//2nd Bridge forwards
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,
			0x00,0x00,0x00,};
	//configure SPI Bus
	SPI.beginTransaction(_shiftSPISettings);
	//activate Chipselct and buffer enable
	digitalWrite(_BUFFEN, LOW);
	digitalWrite(_SHIFTSS, LOW);
	//write coresponding data to the bus
	uint8_t controalWordNumber=(bridge*2)+(uint8_t)direction;//
	uint8_t *addr = (uint8_t*) hBridgeTestControlWords + (controalWordNumber * 3);
	SPI.transfer(addr, 3);
	SPI.endTransaction();
	//deactivate Chipselct and buffer enable
	digitalWrite(_SHIFTSS, HIGH);
	digitalWrite(_BUFFEN, HIGH);
}
