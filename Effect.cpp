#include "Effect.h"

// Constructors/Destructors
//  

Effect::Effect()
{

}

Effect::~Effect()
{
}

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Effect::initAttributes()
{
}

Effect::Effect(int strength, int duration, EffectType t) {
	this->type = t;
	this->duration = duration;
	this->strength = strength;

}

Effect::Effect(EffectType t) {
	this->type = t;
	this->duration = 5;
	this->strength = 1;
}
