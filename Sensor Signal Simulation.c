#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Sensor data: ");
    for(i=0;i<12;i++) {
        if(i%4==0)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}