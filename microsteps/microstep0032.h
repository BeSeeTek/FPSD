
    #ifndef FPSD_MICROSTEPS_H_
    #define FPSD_MICROSTEPS_H_
/*
 * microstep32.h
 *
 *  Created on: 2021-03-30 00:31:59.328045
 *      Author: Benedikt Seeger
 *
 * This file was generated by microstep_gernerato.py. And contains the Shiftregsiter and DAC control words for a motor with 5 phases.
 * NUMBER OF MICROSTEPS=32
 */
 #define NUMBERMICROSTEPS 32
static const uint8_t DACData[5*32] = { 0xff, 0x4e, 0xce, 0xce, 0x4e, //This row holds 0. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[0]
				0xfa, 0x1d, 0xe7, 0xad, 0x7c, 
				0xeb, 0x14, 0xf7, 0x85, 0xa5, 
				0xd4, 0x45, 0xfe, 0x58, 0xc8, 
				0xb4, 0x73, 0xfb, 0x27, 0xe3, 
				0x8d, 0x9d, 0xef, 0xa, 0xf5, 
				0x61, 0xc1, 0xd9, 0x3b, 0xfe, 
				0x31, 0xde, 0xbb, 0x6a, 0xfd, 
				0x0, 0xf2, 0x95, 0x95, 0xf2, 
				0x31, 0xfd, 0x6a, 0xbb, 0xde, 
				0x61, 0xfe, 0x3b, 0xd9, 0xc1, //This row holds 10. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[50]
				0x8d, 0xf5, 0xa, 0xef, 0x9d, 
				0xb4, 0xe3, 0x27, 0xfb, 0x73, 
				0xd4, 0xc8, 0x58, 0xfe, 0x45, 
				0xeb, 0xa5, 0x85, 0xf7, 0x14, 
				0xfa, 0x7c, 0xad, 0xe7, 0x1d, 
				0xff, 0x4e, 0xce, 0xce, 0x4e, 
				0xfa, 0x1d, 0xe7, 0xad, 0x7c, 
				0xeb, 0x14, 0xf7, 0x85, 0xa5, 
				0xd4, 0x45, 0xfe, 0x58, 0xc8, 
				0xb4, 0x73, 0xfb, 0x27, 0xe3, //This row holds 20. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[100]
				0x8d, 0x9d, 0xef, 0xa, 0xf5, 
				0x61, 0xc1, 0xd9, 0x3b, 0xfe, 
				0x31, 0xde, 0xbb, 0x6a, 0xfd, 
				0x0, 0xf2, 0x95, 0x95, 0xf2, 
				0x31, 0xfd, 0x6a, 0xbb, 0xde, 
				0x61, 0xfe, 0x3b, 0xd9, 0xc1, 
				0x8d, 0xf5, 0xa, 0xef, 0x9d, 
				0xb4, 0xe3, 0x27, 0xfb, 0x73, 
				0xd4, 0xc8, 0x58, 0xfe, 0x45, 
				0xeb, 0xa5, 0x85, 0xf7, 0x14, //This row holds 30. Step DACword 0,1,2,3,4,5 word for channel 0 is acced by DACData[150]
				0xfa, 0x7c, 0xad, 0xe7, 0x1d, 
				};

static const uint8_t BridgeWords[3*32] = { 0x0,0xdc,0xde,//This row holds 0. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[0]
				0x0,0xdc,0xde,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,//This row holds 10. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[30]
				0x0,0xec,0xb6,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,//This row holds 20. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[60]
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,//This row holds 30. Step BridgeControalWord 0,1,2 first sihftOutWord is acced by BridgeWords[90]
				0x0,0xdc,0xde,
				};

#endif /* FPSD_MICROSTEPS_H_ */