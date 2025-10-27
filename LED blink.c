#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("LED blinking simulation ");
    for(i=0;i<10;i++) {
        if(i%2==0)
            printf("ON ");
        else
            printf("OFF ");
    }
    return 0;
}