#include <stdio.h>

int main() {
    float fahrenheit = 98.6;
    float celsius;

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Celsius = %.2f\n", celsius);
    return 0;
}
