#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Binary counter: ");
    for(i=0;i<8;i++) {
        printf("%d ", i%2);
    }
    return 0;
}