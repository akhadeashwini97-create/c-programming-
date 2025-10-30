#include <stdio.h>

float avg(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main() {
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("Average = %.2f", avg(a, b, c));
    return 0;
}
