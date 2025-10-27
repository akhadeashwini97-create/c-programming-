#include<stdio.h>
int findMax(int a, int b, int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else
        return c;
}
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Maximum=%d",findMax(a,b,c));
    return 0;
}
