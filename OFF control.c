#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Motor control signal ");
    for(i=0;i<8;i++) {
        if(i<4)
            printf("ON ");
        else
            printf("OFF ");
    }
    return 0;
}