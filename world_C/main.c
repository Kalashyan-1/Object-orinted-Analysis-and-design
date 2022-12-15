#include "world.h"

int main(void) {
	world w;
	initFrog(&w.fr);
	Sun s;
	turnON(&s);
	getDayOrNight(s.turnSun, &w);
	turnOFF(&s);
	getDayOrNight(s.turnSun, &w);
	turnON(&s);
	getDayOrNight(s.turnSun, &w);

return 0;
}

