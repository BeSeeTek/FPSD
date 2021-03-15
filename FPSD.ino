#include <Arduino.h>
#include "fspd.h"
<<<<<<< Updated upstream
#include <LCD5110_Graph.h>

fpstepper MotorPHI(PHISHIFTSS,PHIMR,PHIDACCS,PHILDAC,PHIBUFFEN,0,0.00001,255); //int SHIFTSS, int MR, int DACSS, int LDAC,int BUFFEN, int32_t pos, float stepToDeg, uint8_t currentLimit)
fpstepper MotorCHI(CHISHIFTSS,CHIMR,CHIDACCS,CHILDAC,CHIBUFFEN,0,0.00001,255);

int SCK = D52;                   // Pin connected to latchPin "SH_CP" of 74HC595
int MOSI = D51;                  // Pin connected to dataPin "DS" of 74HC595
int MISO = 50;
static bool PHIMOVE;                    // Motoren bewegen
static bool PHIDIRECTION;               // 0 == Rechtslauf
static bool CHIMOVE;                    //static deshalb, weil somit der Wert der ausgelesen wurde, für einen ganzen Loop nicht gelöscht wird
static bool CHIDIRECTION;               // 0 == Rechtslauf
static bool PHILIM-;
static bool PHILIM+;
static bool CHILIM-;
static bool CHILIM+;
uint16_t delayms = 4;            // Delay zwischen den einzelnen Steps
bool debugprinting = false;

//LCD
LCD5110 myGLCD(52,51,A5,A7,28);  //LCD5110(int SCK, int MOSI, int DC, int RST, int CS);
extern uint8_t SmallFont[];
extern unsigned char TinyFont[];

//----------------------------------------------------
//***PHI***
//----------------------------------------------------
int PHISHIFTSS = D27;            // Pin connected to PHIclockPin "ST_CP" of 74HC595
int PHIBUFFEN = D25;
int PHIDACREF = A0;
int PHIDACCS = D26;
int PHILDAC = D14;
int PHIMR = D15;
static bool PHIMOVE = A8;                    // 0 == Zustimmung an. static deshalb, weil somit der Wert der ausgelesen wurde, für einen ganzen Loop nicht gelöscht wird
static bool PHIDIRECTION = A9;               // 0 == Rechtslauf
static bool PHILIM- = D17;                   //PHIright
static bool PHILIM+ = D16;                   //PHIleft
int PHIROT1 = D18;
int PHIROT2 = D19;
//---------------------------------------------------
//***CHI***
//---------------------------------------------------
int CHISHIFTSS = D24;
int CHIBUFFEN = D22;
int CHIDACREF = A1;
int CHIDACCS = D23;
int CHILDAC = D7;
int CHIMR = D6;
static bool CHIMOVE = A10;                    // 0 == Zustimmung an
static bool CHIDIRECTION = A11;               // 0 == Rechtslauf
static bool CHILIM- = D4;                     //CHIright
static bool CHILIM+ = D5;                     //CHIleft
int CHIROT1 = D3;
int CHIROT2 = D2;
int FRAMCS = 29;
int FRAMHOLD = 11;
int FRAMWP = 12;
int LVLDIR = A6;




void setup()
	{
=======
//(int SHIFTSS, int MR, int DACSS, int DACLOAD,int BUFFENABLE, int32_t pos,float stepToDeg, uint8_t currentLimit) {
fpstepper Motor(7,5,4,3,8,0,0.00001,255);
uint8_t currentlimit=0;
void setup() {
>>>>>>> Stashed changes
	Motor.setup();

  	pinMode(PHISHIFTSS, OUTPUT);
  	pinMode(PHIBUFFEN, OUTPUT);
  	pinMode(PHIDACREF, OUTPUT);
  	pinMode(PHIDACCS, OUTPUT);
  	pinMode(PHILDAC, OUTPUT);
  	pinMode(PHIMR, OUTPUT);
  	pinMode(PHIMOVE, INPUT_PULLUP);
  	pinMode(PHIDIRECTION, INPUT_PULLUP);
  	pinMode(PHILIM-, INPUT_PULLUP);
  	pinMode(PHILIM+, INPUT_PULLUP);
  	pinMode(PHIROT1, INPUT);
  	pinMode(PHIROT2, INPUT);
  	pinMode(CHISHIFTSS, OUTPUT);
  	pinMode(CHIBUFFEN, OUTPUT);
  	pinMode(CHIDACREF, OUTPUT);
  	pinMode(CHIDACCS, OUTPUT);
  	pinMode(CHIDAC, OUTPUT);
  	pinMode(CHIMR, OUTPUT);
  	pinMode(CHIMOVE, INPUT_PULLUP);
  	pinMode(CHIDIRECTION; INPUT_PULLUP);
  	pinMode(CHILIM-, INPUT_PULLUP);
  	pinMode(CHILIM+, INPUT_PULLUP);
  	pinMode(CHIROT1, INPUT);
  	pinMode(CHIROT2, INPUT);

  	pinMode(FRAMCS, OUTPUT);
  	pinMode(FRAMHOLD, OUTPUT);
  	pinMode(FRAMWP, OUTPUT);
  	pinMode(LVLDIR, OUTPUT);

	}

  Serial.begin(115200);
  //LCD
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  randomSeed(analogRead(7));
}

<<<<<<< Updated upstream
void loop()
{
  PHIDIRECTION = 	digitalRead(PHIDIRECTION);
  PHIMOVE = 			digitalRead(PHIMOVE);
  PHILIM- = 			digitalRead(PHILIM-);
  PHILIM+ = 			digitalRead(PHILIM+);
  CHIDIRECTION = 	digitalRead(CHIDIRECTION);
  CHIMOVE = 			digitalRead(CHIMOVE);
  CHILIM- = 			digitalRead(CHILIM-);
  CHILIM+ = 			digitalRead(CHILIM+);

  //PHI Uhrzeigersinn
  if (PHILIM+ == low && PHIMOVE == low && PHIDIRECTION == low)
	  {
      MotorPHI.forward();
    }

  //PHI Gegenuhrzeigersinn
  if (PHILIM- == low && PHIMOVE == low && PHIDIRECTION == high)
    {
      MotorPHI.backward();
    }

  //CHI Uhrzeigersinn
  if (CHILIM+ == low && CHIMOVE == low && CHIDIRECTION == low)
	  {
      MotorCHI.forward();
    }

  //CHI Gegenuhrzeigersinn
  if (CHILIM- == low && CHIMOVE == low && CHIDIRECTION == high)
    {
      MotorCHI.backward();
    }



  //debugprinting
  if (debugprinting == true)
    {
      if (PHIDIRECTION == HIGH)
        {
          Serial.println("PHI Linkslauf");
        }
        else
        {
          Serial.println("PHI Rechtslauf");
        }
      if (PHIMOVE == HIGH)
        {
          Serial.println("PHI Zustimmung aus");
        }
        else
        {
          Serial.println("PHI Zustimmung an");
        }
      if (CHIDIRECTION == HIGH)
        {
          Serial.println("CHI Linkslauf");
        }
        else
        {
          Serial.println("CHI Rechtslauf");
        }
      if (CHIMOVE == HIGH)
        {
          Serial.println("CHI Zustimmung aus");
        }
        else
        {
          Serial.println("CHI Zustimmung an");
        }
      if (PHILIM- == HIGH)
        {
          Serial.println("PHI Endlage GUZS");
        }
      if (PHILIM+ == HIGH)
        {
          Serial.println("PHI Endlage UZS");
        }
      if (CHILIM- == HIGH)
        {
          Serial.println("CHI Endlage GUZS");
        }
      if (CHILIM+ == HIGH)
        {
          Serial.println("CHI Endlage UZS");
        }
    }

  //LCD
  myGLCD.clrScr();
  myGLCD.print("*PHI*", LEFT, 0);
  if (limitUZS == HIGH)
    {
      myGLCD.print("limitUZS", RIGHT,0);
    }
  if (limitGUZS == HIGH)
    {
      myGLCD.print("limitGUZS", RIGHT,0);
    }
  if (Move == HIGH)
        {
          myGLCD.print("Zustimmung aus", CENTER, 7);
        }
        else
        {
          myGLCD.print("Zustimmung an", CENTER, 7);
        }
  myGLCD.print("Pos: 360G", LEFT, 15);
  if (Bewegungsrichtung == HIGH)
      {
        myGLCD.print("GUZS", RIGHT, 15);
      }
  else
    {
      myGLCD.print("UZS", RIGHT, 15);
    }
  myGLCD.drawLine(0,23,84,23);
  myGLCD.print("*CHI*", LEFT, 25);
  if (Move == HIGH)
        {
          myGLCD.print("Zustimmung aus", CENTER, 32);
        }
        else
        {
          myGLCD.print("Zustimmung an", CENTER, 32);
        }
  myGLCD.print("Pos: 360G", LEFT, 40);
  myGLCD.setFont(SmallFont);
  myGLCD.update();

=======
void loop() {
	Motor.forward();
  Motor.setCurrentLimit(currentlimit);
  currentlimit=currentlimit+10;
>>>>>>> Stashed changes
}
