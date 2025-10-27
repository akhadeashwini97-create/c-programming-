#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Alternate signal: ");
    for(i=0;i<10;i++) {
        if(i%2==0)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}