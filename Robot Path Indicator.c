#include <stdio.h>
#include <conio.h>
int main() {
    int i;
    printf("Robot path: ");
    for(i=0;i<8;i++) {
        if(i%3==0)
            printf("→ ");
        else
            printf("· ");
    }
    return 0;
}
