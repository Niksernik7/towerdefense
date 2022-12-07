
#ifndef BUILDING_H
#define BUILDING_H

#include <string>


/**
  * class Building
  * 
  */

/******************************* Abstract Class ****************************
Building does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Building
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Building();

  /**
   * Empty Destructor
   */
  virtual ~Building();

  // Static Public attributes
  //  

  // Public attributes
  //  

  // Public attribute accessor methods
  //


  // Public attribute accessor methods
  //

    virtual std::string BuildingType() const = 0;

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

#endif // BUILDING_H
