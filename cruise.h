#include <string>
#include "ship.h"
using namespace std;
// The Cruise class has an additional field, the maximum number of passengers (an integer), called maxPassengers. Include accessor (getter) and mutator(setter) f
// unctions for the Cruise class’s additional data member, getmaxPassengers() and setmaxPassengers(), respectively. The Cruise class has two constructors: a default one
// and a one that is passed three parameters. The default constructor initializes the ship name to an empty string, the year to -1, the ship type as cruise, and the maxPassengers to 0.
class Cruise : public Ship
{
  int maxPassengers;

public:
  // constructor
  Cruise(string name, int year, shipType type, int maxPassengers) : Ship("", -1, cruise), maxPassengers(0) {}
  // second constructor
  Cruise(string name, int year, enum shipType) : Ship(name, year, type) {}

  // setter methods
  int setmaxPassengers();

  // getter methods
  int getmaxPassengers() { return maxPassengers; }

  // abstract member function
  virtual void print() = 0;
};
