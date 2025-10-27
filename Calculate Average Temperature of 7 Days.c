#include <stdio.h>

float averageTemp(float t[], int n) {
    int i;
    float sum = 0;
    for(i = 0; i < n; i++)
        sum += t[i];
    return sum / n;
}

int main() {
    float temp[7], avg;
    int i;
    printf("Enter temperature of 7 days: ");
    for(i = 0; i < 7; i++)
        scanf("%f", &temp[i]);

    avg = averageTemp(temp, 7);
    printf("Average Temperature = %.2f\n", avg);
    return 0;
}