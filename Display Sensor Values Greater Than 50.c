#include <stdio.h>

int main() {
    int s[5], i;
    printf("Enter 5 sensor readings: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &s[i]);

    printf("Readings above 50 are: ");
    for(i = 0; i < 5; i++) {
        if(s[i] > 50)
            printf("%d ", s[i]);
    }
    return 0;
}