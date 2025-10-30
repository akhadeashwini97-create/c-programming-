#include <stdio.h>

float total(float d[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += d[i];
    return sum;
}

int main() {
    float d[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter distance %d: ", i+1);
        scanf("%f", &d[i]);
    }
    printf("Total Distance = %.2f km", total(d, 5));
    return 0;
}
