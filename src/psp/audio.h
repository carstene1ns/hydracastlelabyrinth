#ifndef PSPAUDIO_H
#define PSPAUDIO_H

#include <oslib/oslib.h>

#define PHL_Music OSL_SOUND*
#define PHL_Sound OSL_SOUND*

void PHL_AudioInit();
void PHL_AudioClose();

PHL_Music PHL_LoadMusic(char* fname, int loop); //Same as PHL_LoadSound, but expects a file name without extension
PHL_Sound PHL_LoadSound(char* fname);

void PHL_PlayMusic(PHL_Sound snd);
void PHL_PlaySound(PHL_Sound snd, int channel);

void PHL_StopMusic();
void PHL_StopSound(PHL_Sound snd, int channel);

#define PHL_FreeMusic PHL_FreeSound
void PHL_FreeSound(PHL_Sound snd);

#endif