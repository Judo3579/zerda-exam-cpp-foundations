/*
 * aircraft.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */
#include "aircraft.hpp"
using namespace std;

Aircraft::Aircraft() {
  this->ammo_level = 0;
  this->type = type;
  this->damage = damage;
  this->base_damage = base_damage;
  this->ammo = 0;
}

int Aircraft::fight(int ammo, int damage) {
  return damage = base_damage * ammo;
}

const unsigned int Aircraft::refill() {
  int reference = ammo_level - ammo;
  ammo = ammo_level;
  return reference;
}

string Aircraft::get_type() {
  return "Type: " + type;
}

string Aircraft::get_status(const *char) {
  return "Type: " + type + ", Ammo: " + ammo_level + ", Base damage: " + base_damage + ", All damage: " + damage;
}

Aircraft::~Aircraft() {

}
