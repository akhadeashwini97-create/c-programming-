#include <stdio.h>

float calcAvg(float hum[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += hum[i];
    return sum / n;
}

int main() {
    float hum[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter humidity %d: ", i+1);
        scanf("%f", &hum[i]);
    }
    printf("Average Humidity = %.2f%%", calcAvg(hum, 5));
    return 0;
}
