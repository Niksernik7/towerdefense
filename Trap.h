
#ifndef TRAP_H
#define TRAP_H

#include "Weapon.h"
#include "Effect.h"
#include <string>


/**
  * class Trap
  * 
  */

class Trap : virtual public Weapon
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Trap();

  /**
   *  Explicit Constructor
   */
   explicit Trap(const Effect& ef);
  /**
   * Empty Destructor
   */
  virtual ~Trap();

  // Static Public attributes
  //  

  // Public attributes
  //  

  Effect effect;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of effect
   * @param value the new value of effect
   */
  void setEffect(Effect value)
  {
    effect = value;
  }

  /**
   * Get the value of effect
   * @return the value of effect
   */
  Effect getEffect()
  {
    return effect;
  }

  void upgrade() override;

  void check_for_attack() override;

    std::string BuildingType() const override {
	    return "Trap";
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

#endif // TRAP_H
