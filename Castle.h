
#ifndef CASTLE_H
#define CASTLE_H

#include "Building.h"

#include <string>


/**
  * class Castle
  * 
  */

class Castle : virtual public Building
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Castle();

  /**
   * Initialising Constructor
   */
  explicit Castle(std::string name);

  /**
   * Empty Destructor
   */
  virtual ~Castle();

  // Static Public attributes
  //  

  // Public attributes
  //  

  float max_hp;
  float cur_hp;
  float gold;
  std::string name;
  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of max_hp
   * @param value the new value of max_hp
   */
  void setMax_hp(float value)
  {
    max_hp = value;
  }

  /**
   * Get the value of max_hp
   * @return the value of max_hp
   */
  float getMax_hp()
  {
    return max_hp;
  }

  /**
   * Set the value of cur_hp
   * @param value the new value of cur_hp
   */
  void setCur_hp(float value)
  {
    cur_hp = value;
  }

  /**
   * Get the value of cur_hp
   * @return the value of cur_hp
   */
  float getCur_hp()
  {
    return cur_hp;
  }

  /**
   * Set the value of gold
   * @param value the new value of gold
   */
  void setGold(float value)
  {
    gold = value;
  }

  /**
   * Get the value of gold
   * @return the value of gold
   */
  float getGold()
  {
    return gold;
  }

  /**
   * Set the value of name
   * @param value the new value of name
   */
  void setName(std::string value)
  {
    name = value;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  std::string getName()
  {
    return name;
  }
   std::string BuildingType() const override {
	  return "Castle";
  }


    /**
   */
  void get_hp()
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

#endif // CASTLE_H
