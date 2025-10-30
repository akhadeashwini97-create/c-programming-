#include <stdio.h>

float totalSalary(float sal[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++)
        total += sal[i];
    return total;
}

int main() {
    float sal[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter salary %d: ", i+1);
        scanf("%f", &sal[i]);
    }
    printf("Total Salary = %.2f", totalSalary(sal, 5));
    return 0;
}
