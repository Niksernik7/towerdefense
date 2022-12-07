
#ifndef CAVE_H
#define CAVE_H

#include "Building.h"

#include <string>


/**
  * class Cave
  * 
  */

class Cave : virtual public Building
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Cave(){this->period = 1;};

  /**
   * Empty Destructor
   */
  virtual ~Cave();

  // Static Public attributes
  //  

  // Public attributes
  //  

  float period;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  
  std::string BuildingType() const override {
	  return "Cave";
  }

  /**
   * Set the value of period
   * @param value the new value of period
   */
  void setPeriod(float value)
  {
    period = value;
  }

  /**
   * Get the value of period
   * @return the value of period
   */
  float getPeriod()
  {
    return period;
  }


  /**
   */
  void make_enemy()
  {
  }


  /**
   */
  void make_enemy_btt()
  {
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

#endif // CAVE_H
