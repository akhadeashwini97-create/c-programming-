#include<stdio.h>
int totalCost(int cost[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+cost[i];
    return sum;
}
int main()
{
    int cost[5],i,sum;
    printf("Enter Cost of 5 Items: ");
    for(i=0;i<5;i++)
        scanf("%d",&cost[i]);
    sum=totalCost(cost,5);
    printf("Total Cost=%d",sum);
    return 0;
}
