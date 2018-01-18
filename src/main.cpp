#include <mbed.h>

void redTopLED(){
  DigitalOut red(D5);
  red.write(0);
  wait(0.5);
  red.write(1);
  wait(0.5);
  red.write(0);
  wait(0.5);
}

void redBottomLED(){
  DigitalOut red(PTB22);
  red.write(0);
  wait(0.5);
  red.write(1);
  wait(0.5);
}
void greenBottomLED(){
  DigitalOut green(PTE26);
  green.write(0);
  wait(0.5);
  green.write(1);
  wait(0.5);
}
void blueBottomLED(){
  DigitalOut blue(PTB21);
  blue.write(0);
  wait(0.5);
  blue.write(1);
  wait(0.5);
}

int main() {
    while(1) {
      redBottomLED();
      greenBottomLED();
      blueBottomLED();
      redTopLED();

    }
}
