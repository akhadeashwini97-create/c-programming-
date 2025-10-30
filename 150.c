#include <stdio.h>

float sumSensors(float val[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++)
        total += val[i];
    return total;
}

int main() {
    float val[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter sensor value %d: ", i+1);
        scanf("%f", &val[i]);
    }
    printf("Sum of Sensor Values = %.2f", sumSensors(val, 5));
    return 0;
}
