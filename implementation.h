#include "animal.h"
#include <iostream>

class Grass {
	
	public:
	Grass(): count {20}{}
	void toBeEaten() {
		--count;
		std::cout << "TheGrass is eaten" << "\n";
	}
	int getCount() {
		return count;
	}
	private:
	int count;
};

class Tree {
	public: 
	void toGiveAir() {
		std::cout << "The tree produces air" << "\n";
	}
};

class Sun {
	public:
	Sun(): turnSun {true}{
		std::cout << "Sun is shineing" << "\n";
	}
	void TurnON() {
		std::cout << "Sun is shineing" << "\n";
		turnSun = true;
	}
	void TurnOFF() {
		std::cout << "Sun doesn't shine" << "\n";
		turnSun = false;
	}
    bool getTurn() {
		return turnSun;
	}

	private:
	 bool turnSun;
};
class Frog: public Animal {

	public:
	Frog (): stomach {0}{}
	void sleep() {
		std::cout << "Frog sleeps" << "\n";
	}
	void tobreath() override {
	std::cout << "Forg is breathing" << "\n";
	}

	void eat() override {
		while (stomach <= 5) {
			if (stomach >= 5) {
				std::cout << "Frog is full" << "\n"; 
				return;
			}

			stomach += 1;
			std::cout << "Frog eats grass" << "\n";
		//	gr->toBeEaten();
		}
			tobreath();
	}
	void move() override {
		std::cout << "Frog is moveing" << "\n";
		tobreath();
		if (stomach <= 0) {
			std::cout << "Frog is hungry" << "\n";
		} else {
			stomach -= 1;
		}
	}
	int getStomachValue() {
		return stomach;
	}
	
	private:
	int stomach;


};

