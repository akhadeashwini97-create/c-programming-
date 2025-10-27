#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Square wave output ");
    for(i=0;i<12;i++) {
        if(i<6)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}