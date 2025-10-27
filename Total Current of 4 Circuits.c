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
    int c[4],i,sum;
    printf("Enter Current of 4 Circuits: ");
    for(i=0;i<4;i++)
        scanf("%d",&c[i]);
    sum=totalCurrent(c,4);
    printf("Total Current=%d",sum);
    return 0;
}