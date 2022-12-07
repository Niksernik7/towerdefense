
#ifndef EFFECT_H
#define EFFECT_H

#include <string>

enum EffectType {
    poison,
    freeze,
    weakness
};

/**
  * class Effect
  * 
  */

class Effect
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Effect();

  /**
   * Initialising Constructor
   */
  Effect(int strength, int duration, EffectType t);

  /**
   * Explicit Constructor
   */
  explicit Effect(EffectType t);

  /**
   * Empty Destructor
   */
  virtual ~Effect();

  // Static Public attributes
  //  

  // Public attributes
  //  

  // Public attribute accessor methods

  // Public attribute accessor methods


  /**
   * Set the value of strenght
   * @param value the new value of strenght
   */
  void setStrength(int value)
  {
    strength = value;
  }


  /**
   * Get the value of strenght
   * @return the value of strenght
   */
  int getStrength() const
  {
    return strength;
  }

  /**
   * Set the value of duration
   * @param value the new value of duration
   */
  void setDuration(int value)
  {
    duration = value;
  }

  /**
   * Get the value of duration
   * @return the value of duration
   */
  int getDuration() const
  {
    return duration;
  }

  /**
   * Set the value of type
   * @param value the new value of type
   */
  void setType(EffectType value)
  {
    type = value;
  }

  /**
   * Get the value of type
   * @return the value of type
   */
  EffectType getType()
  {
    return type;
  }

protected:

  // Protected attributes
  int strength;
  int duration;
  EffectType type;


    // Protected attribute accessor methods


  // Protected attribute accessor methods


private:



  // Private attributes


  // Private attribute accessor methods
  //  


  // Private attribute accessor methods
  //  


  void initAttributes();

};

#endif // EFFECT_H
