#include <stdio.h>

int findMin(int a[], int n) {
    int min = a[0], i;
    for(i = 1; i < n; i++) {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}

int main() {
    int sensor[5], i, min;
    printf("Enter 5 Sensor Readings: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &sensor[i]);

    min = findMin(sensor, 5);
    printf("Minimum Reading = %d\n", min);
    return 0;
}