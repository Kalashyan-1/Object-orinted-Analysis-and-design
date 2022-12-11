#include "world.h"

int main() {

	Sun sun;
	World world;
	world.getDayOrNight(sun.getTurn());
	sun.TurnOFF();
	world.getDayOrNight(sun.getTurn());
	sun.TurnON();
	world.getDayOrNight(sun.getTurn());
}
