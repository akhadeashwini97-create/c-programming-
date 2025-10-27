#include<stdio.h>
int totalRainfall(int r[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+r[i];
    return sum;
}
int main()
{
    int r[5],i,sum;
    printf("Enter Rainfall of 5 Days: ");
    for(i=0;i<5;i++)
        scanf("%d",&r[i]);
    sum=totalRainfall(r,5);
    printf("Total Rainfall=%d",sum);
    return 0;
}