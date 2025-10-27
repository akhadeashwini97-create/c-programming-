#include <stdio.h>
#include <conio.h>
int main() {
    int temp=35, i;
    printf("Temp Alert: ");
    for(i=0;i<10;i++) {
        if(temp>30)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}