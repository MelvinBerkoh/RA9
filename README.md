Create an abstract class called Ship, which has the following data members: the name of the ship
(a string), the year that the ship was built (an integer), and the type of ship (enum shipType
{cruise, cargo};). Include getter and setter member functions for each field. Follow the
naming convention for the setter and getter functions for each data member, as follows
setShName(), getShName(), setShYear(), etc. The Ship abstract class has a
constructor that accepts three parameters for initializing its data members: the name of the ship,
the year of its built and its type, in this order. The Ship class has an abstract member function
print(). The enumerated shipType is defined as global.
Create two Ship subclasses called Cruise, and Cargo. The two child classes represent two types of
ships, each with a specific requirement. The Cruise class has an additional field, the maximum
number of passengers (an integer), called maxPassengers. Include accessor (getter) and
mutator(setter) functions for the Cruise class’s additional data member,
getmaxPassengers() and setmaxPassengers(), respectively. The Cruise class has
two constructors: a default one and a one that is passed three parameters. The default constructor
initializes the ship name to an empty string, the year to -1, the ship type as cruise, and the
maxPassengers to 0. The Cargo class has one additional field, the cargo capacity in tonnage
(an integer), called cargoCapacity. Include accessor (getter) and mutator(setter) functions for
the Cargo class’s additional data member, getcargoCapacity() and
setcargoCapacity(), respectively. Similarly, the Cargo class has two constructors: a
default one and a one that is passed three parameters. The default constructor initializes the ship
name to an empty string, the year to -1, the ship type as cargo, and the cargoCapacity to 0.
Both subclasses have to implement the inherited abstract print method from the Ship class.
See the example below and the slides for the format and contents of displayed messages.
Implement each class in a separate header file that carries the class’s name, such as: “ship.h”,
“cruise.h”, and “cargo.h”.
