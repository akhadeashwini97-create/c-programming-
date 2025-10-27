#include<stdio.h>
float avgPressure(int p[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+p[i];
    return (float)sum/n;
}
int main()
{
    int p[6],i;
    float avg;
    printf("Enter 6 Pressure Readings: ");
    for(i=0;i<6;i++)
        scanf("%d",&p[i]);
    avg=avgPressure(p,6);
    printf("Average Pressure=%.2f",avg);
    return 0;
}