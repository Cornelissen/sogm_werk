#include <iostream>
#include <cmath>

#define SAMPLERATE 48000

using namespace std;

int main() {
	int freq = 480;
	int windowSize = SAMPLERATE / freq;
    
	for(int i = 0; i < windowSize; i++) {
		cout << sin((double)i / windowSize * 2*M_PI) << endl;
	}
}