#include <stdio.h>

int findMax(int a[], int n) {
    int max = a[0], i;
    for(i = 1; i < n; i++) {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int main() {
    int sensor[5], i, max;
    printf("Enter 5 Sensor Readings: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &sensor[i]);

    max = findMax(sensor, 5);
    printf("Maximum Reading = %d\n", max);
    return 0;
}