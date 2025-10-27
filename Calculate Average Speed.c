#include <stdio.h>

float avgSpeed(float s[], int n) {
    float sum = 0;
    int i;
    for(i = 0; i < n; i++)
        sum += s[i];
    return sum / n;
}

int main() {
    float s[5], avg;
    int i;
    printf("Enter 5 Speed readings: ");
    for(i = 0; i < 5; i++)
        scanf("%f", &s[i]);

    avg = avgSpeed(s, 5);
    printf("Average Speed = %.2f km/h\n", avg);
    return 0;
}