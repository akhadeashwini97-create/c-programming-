#include <stdio.h>

int main() {
    int a = 3;
    int b = 7;
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
