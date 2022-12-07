
#ifndef TABLE_H
#define TABLE_H

#if 0

#include <string>


/**
  * class Table
  * 
  */

template<class T>
class Table
{
public:
  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Table();

  /**
   * Empty Destructor
   */
  virtual ~Table();

  // Static Public attributes
  //  

  // Public attributes
  //  

  bool Attribute;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of Attribute
   * @param value the new value of Attribute
   */
  void setAttribute(bool value)
  {
    Attribute = value;
  }

  /**
   * Get the value of Attribute
   * @return the value of Attribute
   */
  bool getAttribute()
  {
    return Attribute;
  }


  /**
   */
  void insert()
  {
  }


  /**
   * @return T
   */
  T get_first_pos()
  {
  }


  /**
   * @return T
   */
  T get_last_pos()
  {
  }


  /**
   */
  void get_size()
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

#else

#include <vector>

template<typename T>
class Table : public std::vector<T> { };

#endif

#endif // TABLE_H
