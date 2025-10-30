#include <stdio.h>

float minMarks(float m[], int n) {
    float min = m[0];
    for(int i = 1; i < n; i++)
        if(m[i] < min)
            min = m[i];
    return min;
}

int main() {
    float m[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter marks %d: ", i+1);
        scanf("%f", &m[i]);
    }
    printf("Minimum Marks = %.2f", minMarks(m, 5));
    return 0;
}
