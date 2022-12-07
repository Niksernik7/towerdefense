#include "MagicTower.h"

// Constructors/Destructors
//  

MagicTower::MagicTower(const Effect& ef)
{
	this->effect = ef;
	this->dmg = 5;
	this->fire_rate = 5;
	this->radius = 1;
	this->price = 100;
	this->level = 1;
}
MagicTower::MagicTower(const Effect &ef, float fire_rate, float dmg, float radius, int level, float price) {
	this->effect = ef;
	this->dmg = dmg;
	this->fire_rate = fire_rate;
	this->radius = radius;
	Tower::Weapon::price = price;
	Tower::Weapon::level = level;
}

MagicTower::~MagicTower()
{
}

//
// Methods
//


// Accessor methods
//


// Other methods
//







void MagicTower::upgrade()
{
	this->dmg *= 2;
	this->level++;
	this->fire_rate *= 2;
	this->price *= 2;
	this->radius++;
}

void MagicTower::check_for_attack() {

}
