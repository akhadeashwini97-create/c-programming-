#include <stdio.h>
#include <conio.h>
int main() {
    int i, level=5;
    printf("Light intensity: ");
    for(i=0;i<10;i++) {
        if(i<level)
            printf("* ");
        else
            printf("- ");
    }
    return 0;
}