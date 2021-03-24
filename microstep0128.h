
    #ifndef FPSD_MICROSTEPS_H_
    #define FPSD_MICROSTEPS_H_
/*
 * microstep128.h
 *
 *  Created on: 2021-03-24 16:02:38.063832
 *      Author: Benedikt Seeger
 *
 * This file was generated by microstep_gernerato.py. And contains the Shiftregsiter and DAC control words for a motor with 5 phases.
 * NUMBER OF MICROSTEPS=128
 */
 #define NUMBERMICROSTEPS 128
uint8_t DACChannel0[128] = { 0xff, 0xfe, 0xfd, 0xfc, 0xfa, 0xf7, 0xf4, 0xf0, 0xeb, 0xe6, 0xe0, 
				0xda, 0xd4, 0xcc, 0xc5, 0xbc, 0xb4, 0xab, 0xa1, 0x97, 0x8d, 
				0x83, 0x78, 0x6d, 0x61, 0x55, 0x4a, 0x3d, 0x31, 0x25, 0x18, 
				0xc, 0x0, 0xc, 0x18, 0x25, 0x31, 0x3d, 0x4a, 0x55, 0x61, 
				0x6d, 0x78, 0x83, 0x8d, 0x97, 0xa1, 0xab, 0xb4, 0xbc, 0xc5, 
				0xcc, 0xd4, 0xda, 0xe0, 0xe6, 0xeb, 0xf0, 0xf4, 0xf7, 0xfa, 
				0xfc, 0xfd, 0xfe, 0xff, 0xfe, 0xfd, 0xfc, 0xfa, 0xf7, 0xf4, 
				0xf0, 0xeb, 0xe6, 0xe0, 0xda, 0xd4, 0xcc, 0xc5, 0xbc, 0xb4, 
				0xab, 0xa1, 0x97, 0x8d, 0x83, 0x78, 0x6d, 0x61, 0x55, 0x4a, 
				0x3d, 0x31, 0x25, 0x18, 0xc, 0x0, 0xc, 0x18, 0x25, 0x31, 
				0x3d, 0x4a, 0x55, 0x61, 0x6d, 0x78, 0x83, 0x8d, 0x97, 0xa1, 
				0xab, 0xb4, 0xbc, 0xc5, 0xcc, 0xd4, 0xda, 0xe0, 0xe6, 0xeb, 
				0xf0, 0xf4, 0xf7, 0xfa, 0xfc, 0xfd, 0xfe, };

uint8_t DACChannel1[128] = { 0x4e, 0x42, 0x36, 0x2a, 0x1d, 0x11, 0x5, 0x7, 0x14, 0x20, 0x2c, 
				0x39, 0x45, 0x51, 0x5c, 0x68, 0x73, 0x7e, 0x89, 0x93, 0x9d, 
				0xa7, 0xb0, 0xb9, 0xc1, 0xc9, 0xd1, 0xd8, 0xde, 0xe4, 0xe9, 
				0xee, 0xf2, 0xf6, 0xf9, 0xfb, 0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 
				0xfc, 0xfb, 0xf8, 0xf5, 0xf1, 0xed, 0xe8, 0xe3, 0xdd, 0xd6, 
				0xcf, 0xc8, 0xc0, 0xb7, 0xae, 0xa5, 0x9b, 0x91, 0x87, 0x7c, 
				0x71, 0x66, 0x5a, 0x4e, 0x42, 0x36, 0x2a, 0x1d, 0x11, 0x5, 
				0x7, 0x14, 0x20, 0x2c, 0x39, 0x45, 0x51, 0x5c, 0x68, 0x73, 
				0x7e, 0x89, 0x93, 0x9d, 0xa7, 0xb0, 0xb9, 0xc1, 0xc9, 0xd1, 
				0xd8, 0xde, 0xe4, 0xe9, 0xee, 0xf2, 0xf6, 0xf9, 0xfb, 0xfd, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfb, 0xf8, 0xf5, 0xf1, 0xed, 
				0xe8, 0xe3, 0xdd, 0xd6, 0xcf, 0xc8, 0xc0, 0xb7, 0xae, 0xa5, 
				0x9b, 0x91, 0x87, 0x7c, 0x71, 0x66, 0x5a, };

uint8_t DACChannel2[128] = { 0xce, 0xd5, 0xdb, 0xe2, 0xe7, 0xec, 0xf0, 0xf4, 0xf7, 0xfa, 0xfc, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfb, 0xf9, 0xf6, 0xf3, 0xef, 
				0xea, 0xe5, 0xdf, 0xd9, 0xd2, 0xcb, 0xc3, 0xbb, 0xb2, 0xa9, 
				0x9f, 0x95, 0x8b, 0x80, 0x75, 0x6a, 0x5f, 0x53, 0x47, 0x3b, 
				0x2f, 0x22, 0x16, 0xa, 0x2, 0xf, 0x1b, 0x27, 0x34, 0x40, 
				0x4c, 0x58, 0x63, 0x6f, 0x7a, 0x85, 0x8f, 0x99, 0xa3, 0xad, 
				0xb6, 0xbe, 0xc6, 0xce, 0xd5, 0xdb, 0xe2, 0xe7, 0xec, 0xf0, 
				0xf4, 0xf7, 0xfa, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfb, 
				0xf9, 0xf6, 0xf3, 0xef, 0xea, 0xe5, 0xdf, 0xd9, 0xd2, 0xcb, 
				0xc3, 0xbb, 0xb2, 0xa9, 0x9f, 0x95, 0x8b, 0x80, 0x75, 0x6a, 
				0x5f, 0x53, 0x47, 0x3b, 0x2f, 0x22, 0x16, 0xa, 0x2, 0xf, 
				0x1b, 0x27, 0x34, 0x40, 0x4c, 0x58, 0x63, 0x6f, 0x7a, 0x85, 
				0x8f, 0x99, 0xa3, 0xad, 0xb6, 0xbe, 0xc6, };

uint8_t DACChannel3[128] = { 0xce, 0xc6, 0xbe, 0xb6, 0xad, 0xa3, 0x99, 0x8f, 0x85, 0x7a, 0x6f, 
				0x63, 0x58, 0x4c, 0x40, 0x34, 0x27, 0x1b, 0xf, 0x2, 0xa, 
				0x16, 0x22, 0x2f, 0x3b, 0x47, 0x53, 0x5f, 0x6a, 0x75, 0x80, 
				0x8b, 0x95, 0x9f, 0xa9, 0xb2, 0xbb, 0xc3, 0xcb, 0xd2, 0xd9, 
				0xdf, 0xe5, 0xea, 0xef, 0xf3, 0xf6, 0xf9, 0xfb, 0xfd, 0xfe, 
				0xfe, 0xfe, 0xfe, 0xfc, 0xfa, 0xf7, 0xf4, 0xf0, 0xec, 0xe7, 
				0xe2, 0xdb, 0xd5, 0xce, 0xc6, 0xbe, 0xb6, 0xad, 0xa3, 0x99, 
				0x8f, 0x85, 0x7a, 0x6f, 0x63, 0x58, 0x4c, 0x40, 0x34, 0x27, 
				0x1b, 0xf, 0x2, 0xa, 0x16, 0x22, 0x2f, 0x3b, 0x47, 0x53, 
				0x5f, 0x6a, 0x75, 0x80, 0x8b, 0x95, 0x9f, 0xa9, 0xb2, 0xbb, 
				0xc3, 0xcb, 0xd2, 0xd9, 0xdf, 0xe5, 0xea, 0xef, 0xf3, 0xf6, 
				0xf9, 0xfb, 0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 0xfc, 0xfa, 0xf7, 
				0xf4, 0xf0, 0xec, 0xe7, 0xe2, 0xdb, 0xd5, };

uint8_t DACChannel4[128] = { 0x4e, 0x5a, 0x66, 0x71, 0x7c, 0x87, 0x91, 0x9b, 0xa5, 0xae, 0xb7, 
				0xc0, 0xc8, 0xcf, 0xd6, 0xdd, 0xe3, 0xe8, 0xed, 0xf1, 0xf5, 
				0xf8, 0xfb, 0xfc, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfb, 0xf9, 
				0xf6, 0xf2, 0xee, 0xe9, 0xe4, 0xde, 0xd8, 0xd1, 0xc9, 0xc1, 
				0xb9, 0xb0, 0xa7, 0x9d, 0x93, 0x89, 0x7e, 0x73, 0x68, 0x5c, 
				0x51, 0x45, 0x39, 0x2c, 0x20, 0x14, 0x7, 0x5, 0x11, 0x1d, 
				0x2a, 0x36, 0x42, 0x4e, 0x5a, 0x66, 0x71, 0x7c, 0x87, 0x91, 
				0x9b, 0xa5, 0xae, 0xb7, 0xc0, 0xc8, 0xcf, 0xd6, 0xdd, 0xe3, 
				0xe8, 0xed, 0xf1, 0xf5, 0xf8, 0xfb, 0xfc, 0xfe, 0xfe, 0xfe, 
				0xfe, 0xfd, 0xfb, 0xf9, 0xf6, 0xf2, 0xee, 0xe9, 0xe4, 0xde, 
				0xd8, 0xd1, 0xc9, 0xc1, 0xb9, 0xb0, 0xa7, 0x9d, 0x93, 0x89, 
				0x7e, 0x73, 0x68, 0x5c, 0x51, 0x45, 0x39, 0x2c, 0x20, 0x14, 
				0x7, 0x5, 0x11, 0x1d, 0x2a, 0x36, 0x42, };

uint8_t BridgeWords[3*128] = { 0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xdc,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xd6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb6,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xec,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xb7,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xea,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xbf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xdf,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xda,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				};