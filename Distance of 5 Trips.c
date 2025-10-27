#include<stdio.h>
int totalDistance(int d[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+d[i];
    return sum;
}
int main()
{
    int d[5],i,sum;
    printf("Enter Distance of 5 Trips: ");
    for(i=0;i<5;i++)
        scanf("%d",&d[i]);
    sum=totalDistance(d,5);
    printf("Total Distance=%d",sum);
    return 0;
}