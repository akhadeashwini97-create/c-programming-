#include <stdio.h>
#include <conio.h>
int main() {
    int level=7, i;
    printf("Battery: ");
    for(i=0;i<10;i++) {
        if(i<level)
            printf("| ");
        else
            printf(". ");
    }
    return 0;
}