#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Ultrasonic echo: ");
    for(i=0;i<12;i++) {
        if(i==2 || i==7)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}