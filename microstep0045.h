
    #ifndef FPSD_MICROSTEPS_H_
    #define FPSD_MICROSTEPS_H_
/*
 * microstep45.h
 *
 *  Created on: 2021-03-24 16:02:30.657227
 *      Author: Benedikt Seeger
 *
 * This file was generated by microstep_gernerato.py. And contains the Shiftregsiter and DAC control words for a motor with 5 phases.
 * NUMBER OF MICROSTEPS=45
 */
 #define NUMBERMICROSTEPS 45
uint8_t DACChannel0[45] = { 0xff, 0xfc, 0xf5, 0xe8, 0xd8, 0xc3, 0xaa, 0x8e, 0x6f, 0x4e, 0x2c, 
				0x8, 0x1a, 0x3d, 0x5f, 0x7f, 0x9c, 0xb7, 0xce, 0xe1, 0xef, 
				0xf9, 0xfe, 0xfe, 0xf9, 0xef, 0xe1, 0xce, 0xb7, 0x9c, 0x7f, 
				0x5f, 0x3d, 0x1a, 0x8, 0x2c, 0x4e, 0x6f, 0x8e, 0xaa, 0xc3, 
				0xd8, 0xe8, 0xf5, 0xfc, };

uint8_t DACChannel1[45] = { 0x4e, 0x2c, 0x8, 0x1a, 0x3d, 0x5f, 0x7f, 0x9c, 0xb7, 0xce, 0xe1, 
				0xef, 0xf9, 0xfe, 0xfe, 0xf9, 0xef, 0xe1, 0xce, 0xb7, 0x9c, 
				0x7f, 0x5f, 0x3d, 0x1a, 0x8, 0x2c, 0x4e, 0x6f, 0x8e, 0xaa, 
				0xc3, 0xd8, 0xe8, 0xf5, 0xfc, 0xff, 0xfc, 0xf5, 0xe8, 0xd8, 
				0xc3, 0xaa, 0x8e, 0x6f, };

uint8_t DACChannel2[45] = { 0xce, 0xe1, 0xef, 0xf9, 0xfe, 0xfe, 0xf9, 0xef, 0xe1, 0xce, 0xb7, 
				0x9c, 0x7f, 0x5f, 0x3d, 0x1a, 0x8, 0x2c, 0x4e, 0x6f, 0x8e, 
				0xaa, 0xc3, 0xd8, 0xe8, 0xf5, 0xfc, 0xff, 0xfc, 0xf5, 0xe8, 
				0xd8, 0xc3, 0xaa, 0x8e, 0x6f, 0x4e, 0x2c, 0x8, 0x1a, 0x3d, 
				0x5f, 0x7f, 0x9c, 0xb7, };

uint8_t DACChannel3[45] = { 0xce, 0xb7, 0x9c, 0x7f, 0x5f, 0x3d, 0x1a, 0x8, 0x2c, 0x4e, 0x6f, 
				0x8e, 0xaa, 0xc3, 0xd8, 0xe8, 0xf5, 0xfc, 0xff, 0xfc, 0xf5, 
				0xe8, 0xd8, 0xc3, 0xaa, 0x8e, 0x6f, 0x4e, 0x2c, 0x8, 0x1a, 
				0x3d, 0x5f, 0x7f, 0x9c, 0xb7, 0xce, 0xe1, 0xef, 0xf9, 0xfe, 
				0xfe, 0xf9, 0xef, 0xe1, };

uint8_t DACChannel4[45] = { 0x4e, 0x6f, 0x8e, 0xaa, 0xc3, 0xd8, 0xe8, 0xf5, 0xfc, 0xff, 0xfc, 
				0xf5, 0xe8, 0xd8, 0xc3, 0xaa, 0x8e, 0x6f, 0x4e, 0x2c, 0x8, 
				0x1a, 0x3d, 0x5f, 0x7f, 0x9c, 0xb7, 0xce, 0xe1, 0xef, 0xf9, 
				0xfe, 0xfe, 0xf9, 0xef, 0xe1, 0xce, 0xb7, 0x9c, 0x7f, 0x5f, 
				0x3d, 0x1a, 0x8, 0x2c, };

uint8_t BridgeWords[3*45] = { 0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				};