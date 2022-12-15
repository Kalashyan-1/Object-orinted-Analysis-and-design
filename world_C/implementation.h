#include <stdio.h>
#include <stdbool.h>

#ifndef G
#define G

typedef struct {
 	int count;
} Grass;

void init_grass(Grass* gr) {
	gr->count = 20;
}


void tobeEaten(Grass* gr) {
	gr->count--;
	printf("Grass is eatten");
}

#endif


void toGiveAir() {
	printf("The tree produces air\n");
}




#ifndef F
#define F


typedef struct {
	int stomach;
}Frog;

void initFrog(Frog* fr) {
	fr->stomach = 0;
}

void sleep(Frog* fr) {
	printf("Frog Sleeps\n");
}

void tobreath() {
	printf("Frog is breathing\n");
}

void eat(Frog* fr) {
	while (fr->stomach <= 5) {
		if (fr->stomach >= 5) {
		printf("Frog is full\n");
		return;
		}
	fr->stomach++;
	printf("Frog is eating\n");
	}
	tobreath();
}

void move(Frog* fr) {
	printf("Frog is moveing\n");
	tobreath();
	if (fr->stomach <= 0) {
		printf("Frog is hungry\n");
	} else {
		fr->stomach--;
	}
}

#endif


#ifndef ss
#define ss

typedef struct{
	bool turnSun;
}Sun;

void turnON(Sun* sun) {
	sun->turnSun = true;
	printf("Sun is shiening\n");
}

void turnOFF(Sun* sun) {
	sun->turnSun = false;
	printf("Sun doesn't shine\n");
}

#endif

