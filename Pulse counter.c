#include <stdio.h>
#include <conio.h>
int main() {
    int i, count=0;
    printf("Pulse counting: ");
    for(i=0;i<10;i++) {
        if(i%3==0) {
            printf("1 ");
            count++;
        } else
            printf("0 ");
    }
    printf("\nTotal pulses = %d", count);
    return 0;
}