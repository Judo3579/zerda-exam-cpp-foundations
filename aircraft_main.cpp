/*
 * aircraft_main.cpp
 *
 *  Created on: 2016. dec. 6.
 *      Author: Judo
 */

#include <iostream>

#include "aircraft.hpp"
#include "F35.hpp"
#include "F16.hpp"

using namespace std;

int main() {
  try {
    Aircraft aircraft();
    F16 f16;
    F35 f35;

    f16.fight(8, 30);
    f35.fight(12, 50);

    cout << f16.get_status()<< endl;
    cout << f35.get_status() << endl;
  } catch(char const* ex){
	  cout << "some error occured: '" << ex << "'" << endl;
  }

  return 0;
}
