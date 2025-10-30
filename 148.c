#include <stdio.h>

float findMax(float temp[], int n) {
    float max = temp[0];
    for(int i = 1; i < n; i++)
        if(temp[i] > max)
            max = temp[i];
    return max;
}

int main() {
    float temp[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter temperature %d: ", i+1);
        scanf("%f", &temp[i]);
    }
    printf("Maximum Temperature = %.2f", findMax(temp, 5));
    return 0;
}
