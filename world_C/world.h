#include "implementation.h"

#ifndef W
#define W

typedef struct {
	 Frog fr;
	 Grass gr;
} world;


void getDayOrNight(bool sunValue, world* w) {

		if (sunValue) {
			initFrog(&w->fr);
			toGiveAir();
			tobreath(&w->fr);
			move(&w->fr);
			eat(&w->fr);
			move(&w->fr);
			eat(&w->fr);
		} else {
			sleep(&w->fr);
		}
}

#endif
