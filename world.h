#include "implementation.h"
class World {

	public:
	World();
	~World();
	void getDayOrNight(bool sunValue);
	
	private:	
	Frog fr;
	Grass* gr;
	Tree tr;
};

World::World(): gr {new Grass[20]}{}
		

World::~World() {
		if (gr) {
			delete [] gr;
			gr = nullptr;
		}
}
void World::getDayOrNight(bool sunValue) {

			if (sunValue) {
			tr.toGiveAir();
			fr.tobreath();
			fr.move();
			fr.eat();
			fr.move();
		} else {
			fr.sleep();
		}

}

