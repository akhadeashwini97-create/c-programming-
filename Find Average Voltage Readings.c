#include <stdio.h>

float avgVoltage(float v[], int n) {
    float sum = 0;
    int i;
    for(i = 0; i < n; i++)
        sum += v[i];
    return sum / n;
}

int main() {
    float v[4], avg;
    int i;
    printf("Enter 4 Voltage readings: ");
    for(i = 0; i < 4; i++)
        scanf("%f", &v[i]);

    avg = avgVoltage(v, 4);
    printf("Average Voltage = %.2f V\n", avg);
    return 0;
}