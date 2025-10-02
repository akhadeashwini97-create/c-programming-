#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two numbers (A B): ");
    scanf("%d %d", &n1, &n2);
    int total = n1 + n2;
    printf("A + B = %d\n", total);
    return 0;
}