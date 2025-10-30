#include <stdio.h>

float avgSpeed(float s[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += s[i];
    return sum / n;
}

int main() {
    float s[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter speed %d: ", i+1);
        scanf("%f", &s[i]);
    }
    printf("Average Machine Speed = %.2f", avgSpeed(s, 5));
    return 0;
}
