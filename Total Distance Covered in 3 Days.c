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
    int d[3],i,sum;
    printf("Enter Distance Covered for 3 Days: ");
    for(i=0;i<3;i++)
        scanf("%d",&d[i]);
    sum=totalDistance(d,3);
    printf("Total Distance=%d",sum);
    return 0;
}