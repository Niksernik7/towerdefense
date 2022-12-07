#include "SimpleTower.h"

// Constructors/Destructors
//  

SimpleTower::SimpleTower()
{
	this->dmg = 5;
	this->fire_rate = 5;
	this->radius = 1;
	this->price = 100;
	this->level = 1;
}


SimpleTower::~SimpleTower()
{
}

void SimpleTower::upgrade() {
	this->price *= 1.5;
	this->level++;
	this->fire_rate *= 2;
	this->dmg *= 1.2;
	this->radius *= 1.3;
}


SimpleTower::SimpleTower(float fire_rate, float dmg, float radius, int level, float price) {
	this->dmg = dmg;
	this->fire_rate = fire_rate;
	this->radius = radius;
	this->price = price;
	this->level = level;
}

void SimpleTower::check_for_attack() {

}



//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  


