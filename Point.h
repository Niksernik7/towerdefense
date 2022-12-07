
#ifndef POINT_H
#define POINT_H

#include <string>


/**
  * class Point
  * 
  */

class Point
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Point();
  Point(int x, int y);

  /**
   * Empty Destructor
   */
  virtual ~Point();

  // Static Public attributes
  //  

  // Public attributes
  //  

  int x;
  int y;
};

#endif // POINT_H
