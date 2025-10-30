#include <stdio.h>

float totalExpense(float e[], int n) {
    float sum = 0;
    for(int i = 0; i < n; i++)
        sum += e[i];
    return sum;
}

int main() {
    float e[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter expense %d: ", i+1);
        scanf("%f", &e[i]);
    }
    printf("Total Expense = %.2f", totalExpense(e, 5));
    return 0;
}
