#include <mbed.h>

int main() {

    DigitalOut red(PTB22);
    DigitalOut green(PTE26);
    DigitalOut blue(PTB21);

    while(1) {
      red.write(0);
      wait(0.5);
      red.write(1);
      //red cycle
      wait(0.5);
      green.write(0);
      wait(0.5);
      green.write(1);

      //green cycle
      wait(0.5);
      blue.write(0);
      wait(0.5);
      blue.write(1);
      wait(0.5);

    }
}
