#include "Castle.h"

#include <utility>

// Constructors/Destructors
//  

Castle::Castle(std::string name)
{
	this->name = std::move(name);
	this->max_hp = 1000;
	this->cur_hp = max_hp;
	this->gold = 1000;
}
Castle::~Castle()
{
}

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Castle::initAttributes()
{
}



