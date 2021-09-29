/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#ifndef	__ODMNOISEMONITOR_H__
#define __ODMNOISEMONITOR_H__

#define	ODM_MAX_CHANNEL_NUM					38/* 14+24 */
struct noise_level {
	/* u8 value_a, value_b; */
	u8 value[MAX_RF_PATH];
	/* s8 sval_a, sval_b; */
	s8 sval[MAX_RF_PATH];

	/* s32 noise_a = 0, noise_b = 0, sum_a = 0, sum_b = 0; */
	/* s32 noise[ODM_RF_PATH_MAX]; */
	s32 sum[MAX_RF_PATH];
	/* u8 valid_cnt_a = 0, valid_cnt_b = 0, */
	u8 valid[MAX_RF_PATH];
	u8 valid_cnt[MAX_RF_PATH];

};


typedef struct _ODM_NOISE_MONITOR_ {
	s8 noise[MAX_RF_PATH];
	s16 noise_all;
} ODM_NOISE_MONITOR;

s16 ODM_InbandNoise_Monitor(
	void *pDM_VOID,
	u8 bPauseDIG,
	u8 IGIValue,
	u32 max_time
);

#endif
