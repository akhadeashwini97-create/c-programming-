#include<stdio.h>
int findMin(int a, int b, int c)
{
    if(a<b && a<c)
        return a;
    else if(b<c)
        return b;
    else
        return c;
}
int main()
{
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Minimum=%d",findMin(a,b,c));
    return 0;
}
