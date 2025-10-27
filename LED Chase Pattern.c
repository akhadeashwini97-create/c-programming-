#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Chasing LEDs: ");
    for(i=0;i<10;i++) {
        printf("%d ", i%5);
    }
    return 0;
}
