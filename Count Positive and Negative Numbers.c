#include <stdio.h>

int main() {
    int a[6], i, pos = 0, neg = 0;
    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 6; i++) {
        if(a[i] >= 0)
            pos++;
        else
            neg++;
    }

    printf("Positive = %d, Negative = %d\n", pos, neg);
    return 0;
}