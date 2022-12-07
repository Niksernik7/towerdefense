
#ifndef CELL_H
#define CELL_H

#include <string>
#include <vector>
#include "Point.h"
#include "Building.h"
#include "Enemy.h"


/**
  * class Cell
  * 
  */
enum CellType {
    Road,
    Forest,
    Field
};

class Cell
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Cell();

  /**
   *
   */
   Cell(const Point&, CellType);

  /**
   * Empty Destructor
   */
  virtual ~Cell();

  // Static Public attributes
  //  

  // Public attributes
  //  

  Building *building;
  CellType type;
  Point number;
  Enemy *enemy;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  

  /**
   * Set the value of building
   * @param value the new value of building
   */
  void setBuilding(Building value)
  {
    this->building = &value;
  }

  /**
   * Get the value of building
   * @return the value of building
   */
  Building getBuilding()
  {
    this->building;
  }

  /**
   * Set the value of type
   * @param value the new value of type
   */
  void setType(CellType value)
  {
    this->type = value;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  CellType getType()
  {
    this->type;
  }

  /**
   * Set the value of number
   * @param value the new value of number
   */
  void setNumber(Point value)
  {
    this->number = value;
  }

  /**
   * Get the value of number
   * @return the value of number
   */
  Point getNumber()
  {
    this->number;
  }

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  


  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:
  // Static Private attributes
  //  

  // Private attributes
  //  


  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  void initAttributes();

};

#endif // CELL_H
