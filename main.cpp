#include "mbed.h"

InterruptIn up(p16);
InterruptIn down(p17);
InterruptIn left(p18);
InterruptIn right(p19);
InterruptIn center(p20);

int main() {
    up.mode(PullDown);    // Set up mode and pull-down resistors
    down.mode(PullDown);
    left.mode(PullDown);
    right.mode(PullDown);
    center.mode(PullDown);
    
    printf("Joystick Initialized\n");

    while(1) {
        if(up.read() == 1) {    // Check if button is pressed
            printf("Up\n");
        }
        if(down.read() == 1) {
            printf("Down\n");
        }
        if(left.read() == 1) {
            printf("Left\n");
        }
        if(right.read() == 1) {
            printf("Right\n");
        }
        if(center.read() == 1) {
            printf("Center\n");
        }
    }
}