#include <string>
#include "ship.h"
using namespace std;
//  The Cargo class has one additional field, the cargo capacity in tonnage (an integer), called cargoCapacity. Include accessor (getter) and mutator(setter)
//  functions for the Cargo class’s additional data member, getcargoCapacity() and setcargoCapacity(), respectively. Similarly, the Cargo class has
//  two constructors: a default one and a one that is passed three parameters. The default constructor initializes the ship name to an empty string, the year
//  to -1, the ship type as cargo, and the cargoCapacity to 0.
class Cargo : public Ship
{

public:
  int cargoCapacity;
  // default constructor
  Cargo() : Ship(*(new string("")), -1, shipType::cargo), cargoCapacity(0) {}
  // second constructor
  Cargo(string name = "", int year = -1, shipType type = shipType::cargo, int cargoCapacity = 0) : Ship(name, year, type), cargoCapacity(cargoCapacity) {}

  // setter methods
  void setCapacity(int givenCap)
  {
    cargoCapacity = givenCap;
  }

  // getter methods
  int getCapacity() { return cargoCapacity; }

  // abstract member function
  void print()
  {
    cout << "Name: " << name << ", Year: " << year << ", Capacity (in tons): " << cargoCapacity << endl;
  }
};