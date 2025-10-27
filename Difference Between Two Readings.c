#include<stdio.h>
int difference(int a, int b)
{
    return a-b;
}
int main()
{
    int a,b;
    printf("Enter Two Readings: ");
    scanf("%d%d",&a,&b);
    printf("Difference=%d",difference(a,b));
    return 0;
}
