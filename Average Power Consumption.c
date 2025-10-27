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
    int p[5],i;
    float avg;
    printf("Enter 5 Power Values: ");
    for(i=0;i<5;i++)
        scanf("%d",&p[i]);
    avg=avgPower(p,5);
    printf("Average Power=%.2f",avg);
    return 0;
}