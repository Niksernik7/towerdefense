#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>
#include "Point.h"
#include "Table.h"
#include "Effect.h"


/**
  * class Enemy
  * 
  */

class Enemy
{
public:
  // Constructors/Destructors
  //  
  std::string name;
    float max_hp;
    float cur_hp;
    float gold;
    float speed;
    Point place;
    Table<Effect> effects;

  /**
   * Empty Constructor
   */
  Enemy();

  /**
   * Empty Destructor
   */
  virtual ~Enemy();

  // Static Public attributes
  //  

  // Public attributes
  //  



  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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
   * Set the value of speed
   * @param value the new value of speed
   */
  void setSpeed(float value)
  {
    speed = value;
  }

  /**
   * Get the value of speed
   * @return the value of speed
   */
  float getSpeed()
  {
    return speed;
  }

  /**
   * Set the value of place
   * @param value the new value of place
   */
  void setPlace(Point value)
  {
    place = value;
  }

  /**
   * Get the value of place
   * @return the value of place
   */
  Point getPlace()
  {
    return place;
  }

  void deal_damage_smp();
  void deal_damage_mgt();
  void deal_damage_trp();

  /**
   */


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

#endif // ENEMY_H
