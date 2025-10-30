#include <stdio.h>

float average(float marks[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++)
        total += marks[i];
    return total / n;
}

int main() {
    float marks[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter marks %d: ", i+1);
        scanf("%f", &marks[i]);
    }
    printf("Average Marks = %.2f", average(marks, 5));
    return 0;
}
