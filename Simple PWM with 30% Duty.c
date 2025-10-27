#include <stdio.h>
#include <conio.h>
int main() {
    int duty=3, period=10, i;
    printf("PWM 30 percent duty: ");
    for(i=0;i<period;i++) {
        if(i<duty)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}