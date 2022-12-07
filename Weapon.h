
#ifndef WEAPON_H
#define WEAPON_H

#include "Building.h"

#include <string>


/**
  * class Weapon
  * 
  */

/******************************* Abstract Class ****************************
Weapon does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Weapon : virtual public Building
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Weapon();

  /**
   * Empty Destructor
   */
  virtual ~Weapon();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of level
   * @param value the new value of level
   */
  void  setLevel(int value) {
	this->level = value;
  }

  /**
   * Get the value of level
   * @return the value of level
   */
  int getLevel() const
  {
	  return this->level;
  }

  /**
   * Set the value of price
   * @param value the new value of price
   */
  void setPrice(float value)
  {
	  this->price = value;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  float getPrice()const
  {
	  return this->price;
  }

  /**
   */
  virtual void upgrade() = 0;


  /**
   */
  virtual void check_for_attack() = 0;

protected:
  // Static Protected attributes
  //  

  // Protected attributes
  //  
  int level;
  float price;

  // Protected attribute accessor methods
  //  


  // Protected attribute accessor methods
  //

private:



  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  void initAttributes();

};

#endif // WEAPON_H
