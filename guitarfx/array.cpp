#include <iostrea>

using namespace std;

#define BUFFERSIZE 10

Main() {
    float mijnbuffer[BUFFERSIZE]

      mijnbuffer[0] = 42;
      mijnbuffer[1] = mijnbuffer[0]+10;

      cout << "Array vullen\n";
      for(int sample=0; sample<BUFFERSIZE; sample++){
          mijnbuffer[sample] = BUFFERSIZE - sample;
          } 

      cout << "Array laten zien\n";
      for(int sample=0; sample<BUFFERSIZE; sample++){
          cout << mijnbuffer[sample] << endl;
          }
}
        
      
