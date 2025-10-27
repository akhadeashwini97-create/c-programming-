#include <stdio.h>
#include <conio.h>
int main() {
    int speed=6, i;
    printf("Motor PWM speed: ");
    for(i=0;i<10;i++) {
        if(i<speed)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}