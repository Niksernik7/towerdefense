#include "Trap.h"

// Constructors/Destructors
//  

Trap::Trap()
{

}

Trap::~Trap()
{
}

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Trap::initAttributes()
{
}

Trap::Trap(const Effect &ef) {
	this->effect = ef;
}

void Trap::upgrade() {
	this->price *= 2;
	this->level++;
	this->effect.setStrength(effect.getStrength() * 2);
}

void Trap::check_for_attack() {

}



