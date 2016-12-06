/*
 * aircraft.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */
#include "aircraft.hpp"
using namespace std;

unsigned int Aircraft::TYPE_NAME = 0;

Aircraft::Aircraft() {
  this->ammo_level = 0;
  this->type = Aircraft::TYPE_NAME;
  TYPE_NAME++;
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

string Aircraft::get_status() {
  return "Type: " + type + ", Ammo: " + to_string(ammo_level) + ", Base damage: " + to_string(base_damage) + ", All damage: " + to_string(damage);
}

Aircraft::~Aircraft() {

}
