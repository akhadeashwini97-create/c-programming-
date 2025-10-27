#include <stdio.h>

int main() {
    int a[6], i, even = 0, odd = 0;
    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 6; i++) {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d, Odd = %d\n", even, odd);
    return 0;
}