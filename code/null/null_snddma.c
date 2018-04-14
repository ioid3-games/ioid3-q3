/*
=======================================================================================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it and/or modify it under the terms of the GNU General Public
License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with Quake III Arena source code; if not, write to the Free
Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
=======================================================================================================================================
*/

// all other sound mixing is portable

#include "../qcommon/q_shared.h"
#include "../qcommon/qcommon.h"

/*
=======================================================================================================================================
SNDDMA_Init
=======================================================================================================================================
*/
qboolean SNDDMA_Init(void) {
	return qfalse;
}

/*
=======================================================================================================================================
SNDDMA_GetDMAPos
=======================================================================================================================================
*/
int SNDDMA_GetDMAPos(void) {
	return 0;
}

/*
=======================================================================================================================================
SNDDMA_Shutdown
=======================================================================================================================================
*/
void SNDDMA_Shutdown(void) {

}

/*
=======================================================================================================================================
SNDDMA_BeginPainting
=======================================================================================================================================
*/
void SNDDMA_BeginPainting(void) {

}

/*
=======================================================================================================================================
SNDDMA_Submit
=======================================================================================================================================
*/
void SNDDMA_Submit(void) {

}
#ifdef USE_VOIP
/*
=======================================================================================================================================
SNDDMA_StartCapture
=======================================================================================================================================
*/
void SNDDMA_StartCapture(void) {

}
/*
=======================================================================================================================================
SNDDMA_AvailableCaptureSamples
=======================================================================================================================================
*/
int SNDDMA_AvailableCaptureSamples(void) {
	return 0;
}
/*
=======================================================================================================================================
SNDDMA_Capture
=======================================================================================================================================
*/
void SNDDMA_Capture(int samples, byte *data) {

}
/*
=======================================================================================================================================
SNDDMA_StopCapture
=======================================================================================================================================
*/
void SNDDMA_StopCapture(void) {

}
/*
=======================================================================================================================================
SNDDMA_MasterGain
=======================================================================================================================================
*/
void SNDDMA_MasterGain(float val) {

}
#endif
/*
=======================================================================================================================================
S_RegisterSound
=======================================================================================================================================
*/
sfxHandle_t S_RegisterSound(const char *name, qboolean compressed) {
	return 0;
}

/*
=======================================================================================================================================
S_StartLocalSound
=======================================================================================================================================
*/
void S_StartLocalSound(sfxHandle_t sfxHandle, int channelNum) {

}

/*
=======================================================================================================================================
S_ClearSoundBuffer
=======================================================================================================================================
*/
void S_ClearSoundBuffer(void) {

}
