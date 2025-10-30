#include <stdio.h>

float maxMarks(float m[], int n) {
    float max = m[0];
    for(int i = 1; i < n; i++)
        if(m[i] > max)
            max = m[i];
    return max;
}

int main() {
    float m[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter marks %d: ", i+1);
        scanf("%f", &m[i]);
    }
    printf("Highest Marks = %.2f", maxMarks(m, 5));
    return 0;
}
