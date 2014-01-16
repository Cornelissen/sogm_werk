#include <iostream>
#include "tremolo.h"

using namespace std;

void Tremolo::show_level() {
    cout << "Tremolo level: " << level << endl;
    Amplifier::show_level(); //van de papa dna de show_level lezen
}    
