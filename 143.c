#include <stdio.h>

float calcAverage(float temp[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += temp[i];
    return sum / n;
}

int main() {
    float temp[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter temperature %d: ", i+1);
        scanf("%f", &temp[i]);
    }
    printf("Average Temperature = %.2f", calcAverage(temp, 5));
    return 0;
}
