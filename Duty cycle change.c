#include <stdio.h>
#include <conio.h>
int main() {
    int i, duty=7, period=10;
    printf("Duty cycle simulation ");
    for(i=0;i<period;i++) {
        if(i<duty)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}