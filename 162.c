#include <stdio.h>

float maxHeight(float h[], int n) {
    float max = h[0];
    for(int i = 1; i < n; i++)
        if(h[i] > max)
            max = h[i];
    return max;
}

int main() {
    float h[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter height %d: ", i+1);
        scanf("%f", &h[i]);
    }
    printf("Maximum Height = %.2f", maxHeight(h, 5));
    return 0;
}
