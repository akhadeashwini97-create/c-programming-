#include<stdio.h>
float avgPower(int p[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+p[i];
    return (float)sum/n;
}
int main()
{
    int p[3],i;
    float avg;
    printf("Enter 3 Power Readings: ");
    for(i=0;i<3;i++)
        scanf("%d",&p[i]);
    avg=avgPower(p,3);
    printf("Average Power=%.2f",avg);
    return 0;
}