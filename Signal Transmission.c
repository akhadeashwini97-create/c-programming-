#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Signal transmission: ");
    for(i=0;i<10;i++) {
        if(i%3==0)
            printf("↑ ");
        else
            printf("↓ ");
    }
    return 0;
}
