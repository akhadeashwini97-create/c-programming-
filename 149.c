#include <stdio.h>

float findMin(float volt[], int n) {
    float min = volt[0];
    for(int i = 1; i < n; i++)
        if(volt[i] < min)
            min = volt[i];
    return min;
}

int main() {
    float volt[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter voltage %d: ", i+1);
        scanf("%f", &volt[i]);
    }
    printf("Minimum Voltage = %.2fV", findMin(volt, 5));
    return 0;
}
