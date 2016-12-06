/*
 * aircraft.hpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */

#ifndef AIRCRAFT_HPP_
#define AIRCRAFT_HPP_

#include <string>

class Aircraft {
private:
  unsigned int damage;

protected:
  unsigned int type;
  unsigned int ammo_level;
  unsigned int ammo;
  unsigned int base_damage;

public:
	Aircraft();
	int fight(int ammo, int damage);
	const unsigned int refill();
	std::string get_type();
	std::string get_status();
	~Aircraft();
};



#endif /* AIRCRAFT_HPP_ */
