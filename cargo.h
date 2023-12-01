#include <string>
#include "ship.h"
using namespace std;
//  The Cargo class has one additional field, the cargo capacity in tonnage (an integer), called cargoCapacity. Include accessor (getter) and mutator(setter)
//  functions for the Cargo class’s additional data member, getcargoCapacity() and setcargoCapacity(), respectively. Similarly, the Cargo class has
//  two constructors: a default one and a one that is passed three parameters. The default constructor initializes the ship name to an empty string, the year
//  to -1, the ship type as cargo, and the cargoCapacity to 0.

class Cargo : public Ship
{
  int cargoCapacity;

public:
  // default constructor
  Cargo(string name, int year, shipType type, int cargoCapacity) : Ship("", -1, cargo, 0) {}
  // second constructor 
  

  // setter methods
  int setCapacity();

  // getter methods
  int getCapacity() { return cargoCapacity; }

  // abstract member function
  virtual void print() = 0;
};