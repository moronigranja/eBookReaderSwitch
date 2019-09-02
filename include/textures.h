#ifndef NX_SHELL_TEXTURES_H
#define NX_SHELL_TEXTURES_H

#include <SDL2/SDL.h>

SDL_Texture *battery_20, *battery_20_charging, *battery_30, *battery_30_charging, *battery_50, *battery_50_charging, \
			*battery_60, *battery_60_charging, *battery_80, *battery_80_charging, *battery_90, *battery_90_charging, \
			*battery_full, *battery_full_charging, *battery_low, *battery_unknown;

void Textures_Load(void);
void Textures_Free(void);

#endif