#include <stdio.h>

float avgWeight(float w[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += w[i];
    return sum / n;
}

int main() {
    float w[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter weight %d: ", i+1);
        scanf("%f", &w[i]);
    }
    printf("Average Weight = %.2f kg", avgWeight(w, 5));
    return 0;
}
