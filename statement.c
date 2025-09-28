#include <stdio.h>

int main() {
    char code = 'A';
    switch (code) {
        case 'A':
            printf("Product A selected.\n");
            break;
        case 'B':
            printf("Product B selected.\n");
            break;
        default:
            printf("Invalid code.\n");
    }
    return 0;
}