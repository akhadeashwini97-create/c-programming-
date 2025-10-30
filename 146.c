#include <stdio.h>

float totalRain(float rain[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++)
        total += rain[i];
    return total;
}

int main() {
    float rain[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter rainfall for day %d: ", i+1);
        scanf("%f", &rain[i]);
    }
    printf("Total Rainfall = %.2fmm", totalRain(rain, 5));
    return 0;
}
