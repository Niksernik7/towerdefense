
#ifndef SIMPLETOWER_H
#define SIMPLETOWER_H

#include "Weapon.h"
#include "Tower.h"

#include <string>


/**
  * class SimpleTower
  * 
  */

class SimpleTower : virtual public Weapon, virtual public Tower
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SimpleTower();
  /**
   * Initialising Constructor
   */
  SimpleTower(float fire_rate, float dmg, float radius, int level, float price);
  /**
   * Empty Destructor
   */
  virtual ~SimpleTower();

    std::string BuildingType() const override {
	    return "Simple";
    }
  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  
  void upgrade() override;

  void check_for_attack() override;

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

};

#endif // SIMPLETOWER_H
