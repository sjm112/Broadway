/*
 * Copyright (C) 2007-2008 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
/* ----------------------------------------------------------------
 * 
 * 
 * File Name:  armVCM4P10_CAVLCTables.h
 * OpenMAX DL: v1.0.2
 * Revision:   9641
 * Date:       Thursday, February 7, 2008
 * 
 * 
 * 
 *
 * ----------------------------------------------------------------
 * File:     armVCM4P10_CAVLCTables.h
 * ----------------------------------------------------------------
 * 
 * Header file for ARM implementation of OpenMAX VCM4P10
 * 
 */
 
#ifndef ARMVCM4P10_CAVLCTABLES_H
#define ARMVCM4P10_CAVLCTABLES_H
  
/* CAVLC tables */

extern const OMX_U8 armVCM4P10_CAVLCTrailingOnes[62];
extern const OMX_U8 armVCM4P10_CAVLCTotalCoeff[62];
extern const ARM_VLC32 *armVCM4P10_CAVLCCoeffTokenTables[5];
extern const ARM_VLC32 armVCM4P10_CAVLCLevelPrefix[17];
extern const ARM_VLC32 *armVCM4P10_CAVLCTotalZeroTables[15];
extern const ARM_VLC32 *armVCM4P10_CAVLCTotalZeros2x2Tables[3];
extern const ARM_VLC32 *armVCM4P10_CAVLCRunBeforeTables[7];

#endif
