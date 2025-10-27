#include<stdio.h>
int totalCurrent(int c[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+c[i];
    return sum;
}
int main()
{
    int c[5],i,sum;
    printf("Enter 5 Current Values: ");
    for(i=0;i<5;i++)
        scanf("%d",&c[i]);
    sum=totalCurrent(c,5);
    printf("Total Current=%d",sum);
    return 0;
}