#include <stdio.h>

float avgCurrent(float c[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += c[i];
    return sum / n;
}

int main() {
    float c[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter current %d: ", i+1);
        scanf("%f", &c[i]);
    }
    printf("Average Current = %.2f A", avgCurrent(c, 5));
    return 0;
}
