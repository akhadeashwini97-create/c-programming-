#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("LED bar display: ");
    for(i=0;i<10;i++) {
        if(i<6)
            printf("* ");
        else
            printf("- ");
    }
    return 0;
}