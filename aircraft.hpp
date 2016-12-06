/*
 * aircraft.hpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */

#ifndef AIRCRAFT_HPP_
#define AIRCRAFT_HPP_

#include <iostream>
#include <string>

class Aircraft {
public:
  static unsigned int TYPE_NAME;
  static unsigned int damage;
  static unsigned int ammo;
  static std::string type;
  static unsigned int ammo_level;
  static unsigned int base_damage;

  Aircraft();
  int fight(int ammo, int damage);
  const unsigned int refill();
  std::string get_type();
  std::string get_status();
  ~Aircraft();
};



#endif /* AIRCRAFT_HPP_ */
