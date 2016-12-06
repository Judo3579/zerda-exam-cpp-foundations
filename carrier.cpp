/*
 * carrier.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */
#include "carrier.hpp"

using namespace std;

Carrier::Carrier() {
  this->ammo_storage = ammo_storage;
}

void Carrier::add_aircraft(Aircraft aircraft) {
  aircrafts.push_back(aircraft);
}

unsigned int Carrier::fill() {
  unsigned int needed_ammo;
  if (ammo_storage <= needed_ammo) {
  throw "There is not enough ammo";
  return 0;
  }
  return needed_ammo = ammo_storage - (Aircraft::ammo_level - Aircraft::ammo);
}

unsigned int Carrier::figth() {
  unsigned int other_carrier_healthpoint;
  for (unsigned int i = 0; i < Aircraft::ammo_level ; i++) {
    other_carrier_healthpoint -= Aircraft::base_damage;
  }
  return other_carrier_healthpoint;
}

string Carrier::get_status() {
  string output = "";

  output += "Aircraft:";
  output += "Type: " + Aircraft::type + "Base damage: " + to_string(Aircraft::base_damage) + "All damage: " + to_string(Aircraft::damage);
  output += get_all_status();
  return output;
}

string Carrier::get_all_status() {
  string status = "";
  for (unsigned int i = 0; i < aircrafts.size(); i++) {
    status += aircrafts.at(i).get_status() + "\n";
  }
  return status;
}

Carrier::~Carrier() {

}

