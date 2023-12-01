//  The Ship class has an abstract member function print().
// Create two Ship subclasses called Cruise, and Cargo. The two child classes represent two types of ships, each with a specific requirement.

//  Both subclasses have to implement the inherited abstract print method from the Ship class.
//  See the example below and the slides for the format and contents of displayed messages.
// The enumerated shipType is defined as global
#include <string>
using namespace std;
enum shipType
{
  cruise,
  cargo
};
class Ship
{

  // constructor
  // Create an abstract class called Ship, which has the following data members:
  // the name of the ship (a string), the year that the ship was built (an integer), and
  // the type of ship (enum shipType {cruise, cargo};). Include getter and setter member functions
  // for each field. Follow the naming convention for the setter and getter functions
  // for each data member, as follows setShName(), getShName(), setShYear(), etc.
  // The Ship abstract class has a constructor that accepts three parameters for initializing its data members: the name of the ship,
  //  the year of its built and its type, in this order. The Ship class has an abstract member function print().
public:
  string name;
  int year;
  shipType type;
  Ship(string name, int year, shipType type) : name(name), year(year), type(type) {}

  // setter methods
  void setShName(string givenName)
  {
    name = givenName;
  }
  void setShYear(int givenYear)
  {
    year = givenYear;
  }
  void setShType(shipType givenType)
  {
    type = givenType;
  }

  // getter methods
  std::string getShName() { return name; }
  int getShYear() { return year; }
  shipType getShType() { return type; }

  // abstract member function
  virtual void print() = 0;
};
