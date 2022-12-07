#include "Cell.h"

// Constructors/Destructors
//  


Cell::~Cell()
{
}

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Cell::initAttributes()
{
	type = CellType::Field;
}

Cell::Cell() {
	this->type = Field;
	building = nullptr;
}

Cell::Cell(const Point& p, CellType type) {
	this->number.y = p.y;
	this->number.x = p.x;
	this->type = type;


}

