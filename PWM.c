#include <stdio.h>
#include <conio.h>
int main() {
    int duty=5, period=10, i;
    printf("pwm stimulation ");
    for(i=0;i<period;i++) {
        if(i<duty)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}