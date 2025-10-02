#include <stdio.h>

int main() {
    int a = 1; // true
    int b = 0; // false
    int result;

    result = a && b;

    printf("Result of AND = %d\n", result);
    return 0;
}
