
#ifndef MAGICTOWER_H
#define MAGICTOWER_H

#include "Tower.h"
#include "Effect.h"
#include <string>


/**
  * class MagicTower
  * 
  */

class MagicTower : virtual public Tower
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  MagicTower();

  /**
    * Itialising Constructors
    */
  MagicTower(const Effect& ef, float fire_rate, float dmg, float radius, int level, float price);
  explicit MagicTower(const Effect& ef);
  /**
   * Empty Destructor
   */
  virtual ~MagicTower();

  // Static Public attributes
  //  

  // Public attributes
  //  

  //
  //

  // Public attribute accessor methods
  //

  void upgrade() override;

  void check_for_attack() override;

    std::string BuildingType() const override {
	    return "Magic";
    }

  // Public attribute accessor methods
  //


  /**
   * Set the value of effect
   *
   *
   * @param value the new value of effect
   */
  void setEffect(const Effect& value)
  {
    effect = value;
  }

  /**
   * Get the value of effect
   *
   *
   * @return the value of effect
   */
  Effect getEffect() const
  {
    return effect;
  }

protected:
    Effect effect;

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

#endif // MAGICTOWER_H
