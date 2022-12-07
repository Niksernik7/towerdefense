
#ifndef LANDSCAPE_H
#define LANDSCAPE_H

#include <string>
#include <vector>
#include "Table.h"
#include "Enemy.h"
#include "Cell.h"
//#include "MagicTower.h"

/**
  * class Landscape
  * 
  */

struct Dimensions {
    int height;
    int width;
};

class Landscape
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Landscape();

  /**
   * Empty Destructor
   */
  virtual ~Landscape();

  // Static Public attributes
  //  

  // Public attributes
  //  

  Dimensions dimension;
  Table<Cell> cells;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of dimension
   * @param value the new value of dimension
   */
  void setDimension(Dimensions value)
  {
	  // TODO check
    this->dimension = value;
  }

  /**
   * Get the value of dimension
   * @return the value of dimension
   */
  Dimensions getDimension() const
  {
    return this->dimension;
  }


  /**
   * @return CellType
   */
  CellType getCellType(const Point& pt) const
  {
	  // TODO validate
	  size_t idx = dimension.width * pt.y + pt.x;
	  return cells[idx].type;
  }
    /**
     * Set the value of dimension
     * @param value the new value of celltype
     */
  void setCellType(const Point& pt, CellType type)
  {
	  size_t idx = dimension.width * pt.y + pt.x;
	  cells[idx].type = type;
  }

    /**
     * Set the value of dimension
     * @param value the new value building
     */
  void setBuilding(const Point& pt, Building* b)
  {

	  size_t idx = dimension.width * pt.y + pt.x;

	  if (cells[idx].type != Field || cells[idx].building != nullptr)
		  return;
	  cells[idx].building = b;
  }

  Building* getBuilding(const Point& pt)
  {
	  size_t idx = dimension.width * pt.y + pt.x;
	  return cells[idx].building;
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

#endif // LANDSCAPE_H
