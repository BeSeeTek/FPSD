
    #ifndef FPSD_MICROSTEPS_H_
    #define FPSD_MICROSTEPS_H_
/*
 * microstep15.h
 *
 *  Created on: 2021-03-30 00:31:55.073056
 *      Author: Benedikt Seeger
 *
 * This file was generated by microstep_gernerato.py. And contains the Shiftregsiter and DAC control words for a motor with 5 phases.
 * NUMBER OF MICROSTEPS=15
 */
 #define NUMBERMICROSTEPS 15
static const uint8_t DACData[5*15] = { 0xff, 0x4e, 0xce, 0xce, 0x4e, //This row holds 0. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[0]
				0xe8, 0x1a, 0xf9, 0x7f, 0xaa, 
				0xaa, 0x7f, 0xf9, 0x1a, 0xe8, 
				0x4e, 0xce, 0xce, 0x4e, 0xff, 
				0x1a, 0xf9, 0x7f, 0xaa, 0xe8, 
				0x7f, 0xf9, 0x1a, 0xe8, 0xaa, 
				0xce, 0xce, 0x4e, 0xff, 0x4e, 
				0xf9, 0x7f, 0xaa, 0xe8, 0x1a, 
				0xf9, 0x1a, 0xe8, 0xaa, 0x7f, 
				0xce, 0x4e, 0xff, 0x4e, 0xce, 
				0x7f, 0xaa, 0xe8, 0x1a, 0xf9, //This row holds 10. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[50]
				0x1a, 0xe8, 0xaa, 0x7f, 0xf9, 
				0x4e, 0xff, 0x4e, 0xce, 0xce, 
				0xaa, 0xe8, 0x1a, 0xf9, 0x7f, 
				0xe8, 0xaa, 0x7f, 0xf9, 0x1a, 
				};

static const uint8_t BridgeWords[3*15] = { 0x0,0xdc,0xde,//This row holds 0. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[0]
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xbf,
				0x0,0xda,0xbf,//This row holds 10. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[30]
				0x0,0xda,0xbf,
				0x0,0xda,0xdf,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				};

#endif /* FPSD_MICROSTEPS_H_ */