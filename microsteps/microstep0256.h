
    #ifndef FPSD_MICROSTEPS_H_
    #define FPSD_MICROSTEPS_H_
/*
 * microstep256.h
 *
 *  Created on: 2021-03-29 23:36:00.390973
 *      Author: Benedikt Seeger
 *
 * This file was generated by microstep_gernerato.py. And contains the Shiftregsiter and DAC control words for a motor with 5 phases.
 * NUMBER OF MICROSTEPS=256
 */
 #define NUMBERMICROSTEPS 256
static const uint8_t DACChannel0[256] = { 0xff, 0xfe, 0xfe, 0xfe, 0xfd, 0xfd, 0xfc, 0xfb, 0xfa, 0xf8, 0xf7, 
				0xf5, 0xf4, 0xf2, 0xf0, 0xed, 0xeb, 0xe9, 0xe6, 0xe3, 0xe0, 
				0xdd, 0xda, 0xd7, 0xd4, 0xd0, 0xcc, 0xc9, 0xc5, 0xc1, 0xbc, 
				0xb8, 0xb4, 0xaf, 0xab, 0xa6, 0xa1, 0x9c, 0x97, 0x92, 0x8d, 
				0x88, 0x83, 0x7d, 0x78, 0x72, 0x6d, 0x67, 0x61, 0x5b, 0x55, 
				0x4f, 0x4a, 0x44, 0x3d, 0x37, 0x31, 0x2b, 0x25, 0x1f, 0x18, 
				0x12, 0xc, 0x6, 0x0, 0x6, 0xc, 0x12, 0x18, 0x1f, 0x25, 
				0x2b, 0x31, 0x37, 0x3d, 0x44, 0x4a, 0x4f, 0x55, 0x5b, 0x61, 
				0x67, 0x6d, 0x72, 0x78, 0x7d, 0x83, 0x88, 0x8d, 0x92, 0x97, 
				0x9c, 0xa1, 0xa6, 0xab, 0xaf, 0xb4, 0xb8, 0xbc, 0xc1, 0xc5, 
				0xc9, 0xcc, 0xd0, 0xd4, 0xd7, 0xda, 0xdd, 0xe0, 0xe3, 0xe6, 
				0xe9, 0xeb, 0xed, 0xf0, 0xf2, 0xf4, 0xf5, 0xf7, 0xf8, 0xfa, 
				0xfb, 0xfc, 0xfd, 0xfd, 0xfe, 0xfe, 0xfe, 0xff, 0xfe, 0xfe, 
				0xfe, 0xfd, 0xfd, 0xfc, 0xfb, 0xfa, 0xf8, 0xf7, 0xf5, 0xf4, 
				0xf2, 0xf0, 0xed, 0xeb, 0xe9, 0xe6, 0xe3, 0xe0, 0xdd, 0xda, 
				0xd7, 0xd4, 0xd0, 0xcc, 0xc9, 0xc5, 0xc1, 0xbc, 0xb8, 0xb4, 
				0xaf, 0xab, 0xa6, 0xa1, 0x9c, 0x97, 0x92, 0x8d, 0x88, 0x83, 
				0x7d, 0x78, 0x72, 0x6d, 0x67, 0x61, 0x5b, 0x55, 0x4f, 0x4a, 
				0x44, 0x3d, 0x37, 0x31, 0x2b, 0x25, 0x1f, 0x18, 0x12, 0xc, 
				0x6, 0x0, 0x6, 0xc, 0x12, 0x18, 0x1f, 0x25, 0x2b, 0x31, 
				0x37, 0x3d, 0x44, 0x4a, 0x4f, 0x55, 0x5b, 0x61, 0x67, 0x6d, 
				0x72, 0x78, 0x7d, 0x83, 0x88, 0x8d, 0x92, 0x97, 0x9c, 0xa1, 
				0xa6, 0xab, 0xaf, 0xb4, 0xb8, 0xbc, 0xc1, 0xc5, 0xc9, 0xcc, 
				0xd0, 0xd4, 0xd7, 0xda, 0xdd, 0xe0, 0xe3, 0xe6, 0xe9, 0xeb, 
				0xed, 0xf0, 0xf2, 0xf4, 0xf5, 0xf7, 0xf8, 0xfa, 0xfb, 0xfc, 
				0xfd, 0xfd, 0xfe, 0xfe, 0xfe, };

static const uint8_t DACChannel1[256] = { 0x4e, 0x48, 0x42, 0x3c, 0x36, 0x30, 0x2a, 0x24, 0x1d, 0x17, 0x11, 
				0xb, 0x5, 0x1, 0x7, 0xd, 0x14, 0x1a, 0x20, 0x26, 0x2c, 
				0x32, 0x39, 0x3f, 0x45, 0x4b, 0x51, 0x57, 0x5c, 0x62, 0x68, 
				0x6e, 0x73, 0x79, 0x7e, 0x84, 0x89, 0x8e, 0x93, 0x98, 0x9d, 
				0xa2, 0xa7, 0xac, 0xb0, 0xb5, 0xb9, 0xbd, 0xc1, 0xc5, 0xc9, 
				0xcd, 0xd1, 0xd4, 0xd8, 0xdb, 0xde, 0xe1, 0xe4, 0xe7, 0xe9, 
				0xec, 0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf7, 0xf9, 0xfa, 0xfb, 
				0xfc, 0xfd, 0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
				0xfd, 0xfc, 0xfc, 0xfb, 0xf9, 0xf8, 0xf7, 0xf5, 0xf3, 0xf1, 
				0xef, 0xed, 0xeb, 0xe8, 0xe5, 0xe3, 0xe0, 0xdd, 0xda, 0xd6, 
				0xd3, 0xcf, 0xcc, 0xc8, 0xc4, 0xc0, 0xbc, 0xb7, 0xb3, 0xae, 
				0xaa, 0xa5, 0xa0, 0x9b, 0x96, 0x91, 0x8c, 0x87, 0x82, 0x7c, 
				0x77, 0x71, 0x6b, 0x66, 0x60, 0x5a, 0x54, 0x4e, 0x48, 0x42, 
				0x3c, 0x36, 0x30, 0x2a, 0x24, 0x1d, 0x17, 0x11, 0xb, 0x5, 
				0x1, 0x7, 0xd, 0x14, 0x1a, 0x20, 0x26, 0x2c, 0x32, 0x39, 
				0x3f, 0x45, 0x4b, 0x51, 0x57, 0x5c, 0x62, 0x68, 0x6e, 0x73, 
				0x79, 0x7e, 0x84, 0x89, 0x8e, 0x93, 0x98, 0x9d, 0xa2, 0xa7, 
				0xac, 0xb0, 0xb5, 0xb9, 0xbd, 0xc1, 0xc5, 0xc9, 0xcd, 0xd1, 
				0xd4, 0xd8, 0xdb, 0xde, 0xe1, 0xe4, 0xe7, 0xe9, 0xec, 0xee, 
				0xf0, 0xf2, 0xf4, 0xf6, 0xf7, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 
				0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfc, 
				0xfc, 0xfb, 0xf9, 0xf8, 0xf7, 0xf5, 0xf3, 0xf1, 0xef, 0xed, 
				0xeb, 0xe8, 0xe5, 0xe3, 0xe0, 0xdd, 0xda, 0xd6, 0xd3, 0xcf, 
				0xcc, 0xc8, 0xc4, 0xc0, 0xbc, 0xb7, 0xb3, 0xae, 0xaa, 0xa5, 
				0xa0, 0x9b, 0x96, 0x91, 0x8c, 0x87, 0x82, 0x7c, 0x77, 0x71, 
				0x6b, 0x66, 0x60, 0x5a, 0x54, };

static const uint8_t DACChannel2[256] = { 0xce, 0xd1, 0xd5, 0xd8, 0xdb, 0xdf, 0xe2, 0xe4, 0xe7, 0xea, 0xec, 
				0xee, 0xf0, 0xf2, 0xf4, 0xf6, 0xf7, 0xf9, 0xfa, 0xfb, 0xfc, 
				0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 
				0xfc, 0xfb, 0xfa, 0xf9, 0xf8, 0xf6, 0xf5, 0xf3, 0xf1, 0xef, 
				0xed, 0xea, 0xe8, 0xe5, 0xe2, 0xdf, 0xdc, 0xd9, 0xd6, 0xd2, 
				0xcf, 0xcb, 0xc7, 0xc3, 0xbf, 0xbb, 0xb6, 0xb2, 0xae, 0xa9, 
				0xa4, 0x9f, 0x9a, 0x95, 0x90, 0x8b, 0x86, 0x80, 0x7b, 0x75, 
				0x70, 0x6a, 0x65, 0x5f, 0x59, 0x53, 0x4d, 0x47, 0x41, 0x3b, 
				0x35, 0x2f, 0x29, 0x22, 0x1c, 0x16, 0x10, 0xa, 0x3, 0x2, 
				0x8, 0xf, 0x15, 0x1b, 0x21, 0x27, 0x2e, 0x34, 0x3a, 0x40, 
				0x46, 0x4c, 0x52, 0x58, 0x5e, 0x63, 0x69, 0x6f, 0x74, 0x7a, 
				0x7f, 0x85, 0x8a, 0x8f, 0x94, 0x99, 0x9e, 0xa3, 0xa8, 0xad, 
				0xb1, 0xb6, 0xba, 0xbe, 0xc2, 0xc6, 0xca, 0xce, 0xd1, 0xd5, 
				0xd8, 0xdb, 0xdf, 0xe2, 0xe4, 0xe7, 0xea, 0xec, 0xee, 0xf0, 
				0xf2, 0xf4, 0xf6, 0xf7, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfc, 0xfb, 
				0xfa, 0xf9, 0xf8, 0xf6, 0xf5, 0xf3, 0xf1, 0xef, 0xed, 0xea, 
				0xe8, 0xe5, 0xe2, 0xdf, 0xdc, 0xd9, 0xd6, 0xd2, 0xcf, 0xcb, 
				0xc7, 0xc3, 0xbf, 0xbb, 0xb6, 0xb2, 0xae, 0xa9, 0xa4, 0x9f, 
				0x9a, 0x95, 0x90, 0x8b, 0x86, 0x80, 0x7b, 0x75, 0x70, 0x6a, 
				0x65, 0x5f, 0x59, 0x53, 0x4d, 0x47, 0x41, 0x3b, 0x35, 0x2f, 
				0x29, 0x22, 0x1c, 0x16, 0x10, 0xa, 0x3, 0x2, 0x8, 0xf, 
				0x15, 0x1b, 0x21, 0x27, 0x2e, 0x34, 0x3a, 0x40, 0x46, 0x4c, 
				0x52, 0x58, 0x5e, 0x63, 0x69, 0x6f, 0x74, 0x7a, 0x7f, 0x85, 
				0x8a, 0x8f, 0x94, 0x99, 0x9e, 0xa3, 0xa8, 0xad, 0xb1, 0xb6, 
				0xba, 0xbe, 0xc2, 0xc6, 0xca, };

static const uint8_t DACChannel3[256] = { 0xce, 0xca, 0xc6, 0xc2, 0xbe, 0xba, 0xb6, 0xb1, 0xad, 0xa8, 0xa3, 
				0x9e, 0x99, 0x94, 0x8f, 0x8a, 0x85, 0x7f, 0x7a, 0x74, 0x6f, 
				0x69, 0x63, 0x5e, 0x58, 0x52, 0x4c, 0x46, 0x40, 0x3a, 0x34, 
				0x2e, 0x27, 0x21, 0x1b, 0x15, 0xf, 0x8, 0x2, 0x3, 0xa, 
				0x10, 0x16, 0x1c, 0x22, 0x29, 0x2f, 0x35, 0x3b, 0x41, 0x47, 
				0x4d, 0x53, 0x59, 0x5f, 0x65, 0x6a, 0x70, 0x75, 0x7b, 0x80, 
				0x86, 0x8b, 0x90, 0x95, 0x9a, 0x9f, 0xa4, 0xa9, 0xae, 0xb2, 
				0xb6, 0xbb, 0xbf, 0xc3, 0xc7, 0xcb, 0xcf, 0xd2, 0xd6, 0xd9, 
				0xdc, 0xdf, 0xe2, 0xe5, 0xe8, 0xea, 0xed, 0xef, 0xf1, 0xf3, 
				0xf5, 0xf6, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xfe, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfc, 0xfb, 0xfa, 
				0xf9, 0xf7, 0xf6, 0xf4, 0xf2, 0xf0, 0xee, 0xec, 0xea, 0xe7, 
				0xe4, 0xe2, 0xdf, 0xdb, 0xd8, 0xd5, 0xd1, 0xce, 0xca, 0xc6, 
				0xc2, 0xbe, 0xba, 0xb6, 0xb1, 0xad, 0xa8, 0xa3, 0x9e, 0x99, 
				0x94, 0x8f, 0x8a, 0x85, 0x7f, 0x7a, 0x74, 0x6f, 0x69, 0x63, 
				0x5e, 0x58, 0x52, 0x4c, 0x46, 0x40, 0x3a, 0x34, 0x2e, 0x27, 
				0x21, 0x1b, 0x15, 0xf, 0x8, 0x2, 0x3, 0xa, 0x10, 0x16, 
				0x1c, 0x22, 0x29, 0x2f, 0x35, 0x3b, 0x41, 0x47, 0x4d, 0x53, 
				0x59, 0x5f, 0x65, 0x6a, 0x70, 0x75, 0x7b, 0x80, 0x86, 0x8b, 
				0x90, 0x95, 0x9a, 0x9f, 0xa4, 0xa9, 0xae, 0xb2, 0xb6, 0xbb, 
				0xbf, 0xc3, 0xc7, 0xcb, 0xcf, 0xd2, 0xd6, 0xd9, 0xdc, 0xdf, 
				0xe2, 0xe5, 0xe8, 0xea, 0xed, 0xef, 0xf1, 0xf3, 0xf5, 0xf6, 
				0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 0xf7, 
				0xf6, 0xf4, 0xf2, 0xf0, 0xee, 0xec, 0xea, 0xe7, 0xe4, 0xe2, 
				0xdf, 0xdb, 0xd8, 0xd5, 0xd1, };

static const uint8_t DACChannel4[256] = { 0x4e, 0x54, 0x5a, 0x60, 0x66, 0x6b, 0x71, 0x77, 0x7c, 0x82, 0x87, 
				0x8c, 0x91, 0x96, 0x9b, 0xa0, 0xa5, 0xaa, 0xae, 0xb3, 0xb7, 
				0xbc, 0xc0, 0xc4, 0xc8, 0xcc, 0xcf, 0xd3, 0xd6, 0xda, 0xdd, 
				0xe0, 0xe3, 0xe5, 0xe8, 0xeb, 0xed, 0xef, 0xf1, 0xf3, 0xf5, 
				0xf7, 0xf8, 0xf9, 0xfb, 0xfc, 0xfc, 0xfd, 0xfe, 0xfe, 0xfe, 
				0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 
				0xf7, 0xf6, 0xf4, 0xf2, 0xf0, 0xee, 0xec, 0xe9, 0xe7, 0xe4, 
				0xe1, 0xde, 0xdb, 0xd8, 0xd4, 0xd1, 0xcd, 0xc9, 0xc5, 0xc1, 
				0xbd, 0xb9, 0xb5, 0xb0, 0xac, 0xa7, 0xa2, 0x9d, 0x98, 0x93, 
				0x8e, 0x89, 0x84, 0x7e, 0x79, 0x73, 0x6e, 0x68, 0x62, 0x5c, 
				0x57, 0x51, 0x4b, 0x45, 0x3f, 0x39, 0x32, 0x2c, 0x26, 0x20, 
				0x1a, 0x14, 0xd, 0x7, 0x1, 0x5, 0xb, 0x11, 0x17, 0x1d, 
				0x24, 0x2a, 0x30, 0x36, 0x3c, 0x42, 0x48, 0x4e, 0x54, 0x5a, 
				0x60, 0x66, 0x6b, 0x71, 0x77, 0x7c, 0x82, 0x87, 0x8c, 0x91, 
				0x96, 0x9b, 0xa0, 0xa5, 0xaa, 0xae, 0xb3, 0xb7, 0xbc, 0xc0, 
				0xc4, 0xc8, 0xcc, 0xcf, 0xd3, 0xd6, 0xda, 0xdd, 0xe0, 0xe3, 
				0xe5, 0xe8, 0xeb, 0xed, 0xef, 0xf1, 0xf3, 0xf5, 0xf7, 0xf8, 
				0xf9, 0xfb, 0xfc, 0xfc, 0xfd, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 
				0xfe, 0xfe, 0xfd, 0xfd, 0xfc, 0xfb, 0xfa, 0xf9, 0xf7, 0xf6, 
				0xf4, 0xf2, 0xf0, 0xee, 0xec, 0xe9, 0xe7, 0xe4, 0xe1, 0xde, 
				0xdb, 0xd8, 0xd4, 0xd1, 0xcd, 0xc9, 0xc5, 0xc1, 0xbd, 0xb9, 
				0xb5, 0xb0, 0xac, 0xa7, 0xa2, 0x9d, 0x98, 0x93, 0x8e, 0x89, 
				0x84, 0x7e, 0x79, 0x73, 0x6e, 0x68, 0x62, 0x5c, 0x57, 0x51, 
				0x4b, 0x45, 0x3f, 0x39, 0x32, 0x2c, 0x26, 0x20, 0x1a, 0x14, 
				0xd, 0x7, 0x1, 0x5, 0xb, 0x11, 0x17, 0x1d, 0x24, 0x2a, 
				0x30, 0x36, 0x3c, 0x42, 0x48, };

static const uint8_t BridgeWords[3*256] = { 0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
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
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				0x0,0xdc,0xde,
				};

#endif /* FPSD_MICROSTEPS_H_ */