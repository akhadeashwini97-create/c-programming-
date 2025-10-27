#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Servo pulse: ");
    for(i=0;i<15;i++) {
        if(i<3)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}