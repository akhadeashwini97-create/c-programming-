#include <stdio.h>
#include <conio.h>
int main() {
    int i, speed=4;
    printf("Fan speed: ");
    for(i=0;i<10;i++) {
        if(i<speed)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}