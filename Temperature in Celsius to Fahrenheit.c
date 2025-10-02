#include <stdio.h>

int main() {
    int celsius = 25;
    float fahrenheit;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Fahrenheit = %.1f\n", fahrenheit);
    return 0;
}
