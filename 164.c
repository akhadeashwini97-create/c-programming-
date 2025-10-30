#include <stdio.h>

float totalPrice(float p[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += p[i];
    return sum;
}

int main() {
    float p[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter price %d: ", i+1);
        scanf("%f", &p[i]);
    }
    printf("Total Price = %.2f", totalPrice(p, 5));
    return 0;
}
