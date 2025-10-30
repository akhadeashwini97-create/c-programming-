#include <stdio.h>

float avgVoltage(float volt[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += volt[i];
    return sum / n;
}

int main() {
    float volt[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter voltage %d: ", i+1);
        scanf("%f", &volt[i]);
    }
    printf("Average Voltage = %.2fV", avgVoltage(volt, 5));
    return 0;
}
