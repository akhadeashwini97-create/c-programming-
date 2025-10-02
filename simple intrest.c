#include <stdio.h>

int main() {
    int principal = 1000;
    int rate = 5;
    int time = 2;
    int interest;

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %d\n", interest);
    return 0;
}
