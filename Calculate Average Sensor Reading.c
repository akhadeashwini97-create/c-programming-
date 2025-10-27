#include <stdio.h>

float calculateAverage(int readings[], int n) {
    int sum = 0, i;
    for(i = 0; i < n; i++)
        sum = sum + readings[i];
    return (float)sum / n;
}

int main() {
    int readings[5], i;
    float avg;
    printf("Enter 5 Sensor Readings: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &readings[i]);

    avg = calculateAverage(readings, 5);
    printf("Average Sensor Reading = %.2f\n", avg);
    return 0;
}