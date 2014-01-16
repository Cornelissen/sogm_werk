#ifndef _AMPLIFIER_H_ //if not defined 
#define _AMPLIFIER_H_ // doe dan dit

#define BUFFERSIZE 10

class Amplifier {
 public:
  Amplifier(); // constructor
  void show_level();

 protected: 
  long level;
};

#endif // eind van if
