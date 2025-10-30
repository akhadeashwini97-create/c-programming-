#include <stdio.h>

float diffTemp(float t[], int n) {
    float max = t[0], min = t[0];
    for(int i = 1; i < n; i++) {
        if(t[i] > max) max = t[i];
        if(t[i] < min) min = t[i];
    }
    return max - min;
}

int main() {
    float t[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter temperature %d: ", i+1);
        scanf("%f", &t[i]);
    }
    printf("Temperature Difference = %.2f", diffTemp(t, 5));
    return 0;
}
