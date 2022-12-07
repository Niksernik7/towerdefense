
#ifndef TOWER_H
#define TOWER_H

#include "Weapon.h"

#include <string>


/**
  * class Tower
  * 
  */

/******************************* Abstract Class ****************************
Tower does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Tower : virtual public Weapon
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Tower();

  /**
   * Empty Destructor
   */
  virtual ~Tower();

  // Static Public attributes
  //  

  // Public attributes
  //  

  // Public attribute accessor methods

  // Public attribute accessor methods


  /**
   * Set the value of fire_rate
   * @param value the new value of fire_rate
   */
  void setFire_rate(float value)
  {
	  this->fire_rate = value;
  }


  /**
   * Get the value of fire_rate
   * @return the value of fire_rate
   */
  float getFire_rate()
  {
	  return this->fire_rate;
  }

  /**
   * Set the value of dmg
   * @param value the new value of dmg
   */
  void setDmg(float value)
  {
	  this->dmg = value;
  }

    /**
   * Get the value of dmg
   * @return the value of dmg
   */
  float getDmg()
  {
	  return this->dmg;
  }
  /**
   * Set the value of radius
   * @param value the new value of radius
   */
  void setRadius(float value)
  {
	  this->radius = value;
  }

  /**
   * Get the value of radius
   * @return the value of radius
   */
  float getRadius()
  {
	  return this->radius;
  }

protected:

    //
    //
    float fire_rate;
    float dmg;
    float radius;
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

#endif // TOWER_H
