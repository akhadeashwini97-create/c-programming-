#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Line follower: ");
    for(i=0;i<8;i++) {
        if(i==3)
            printf("1 ");
        else
            printf("0 ");
    }
    return 0;
}
