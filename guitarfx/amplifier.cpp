#include <iostream>
#include "amplifier.h"

using namespace std;


Amplifier::Amplifier() {
  level=5; // default
}


void Amplifier::show_level() {
  cout << "Amplifier level: " << level << endl;
}


