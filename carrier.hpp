/*
 * carrier.hpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */

#ifndef CARRIER_HPP_
#define CARRIER_HPP_

#include <string>
#include <vector>

#include "aircraft.hpp"

using namespace std;

class Carrier {
private:
	vector<Aircraft> aircrafts;
	unsigned int ammo_storage;

public:
	Carrier();
	void add_aircraft();
	unsigned int fill();
	unsigned int figth();
	string get_status();
	string get_all_status();
	~Carrier();
};



#endif /* CARRIER_HPP_ */
