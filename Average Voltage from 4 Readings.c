#include<stdio.h>
float avgVoltage(int v[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+v[i];
    return (float)sum/n;
}
int main()
{
    int v[4],i;
    float avg;
    printf("Enter 4 Voltage Readings: ");
    for(i=0;i<4;i++)
        scanf("%d",&v[i]);
    avg=avgVoltage(v,4);
    printf("Average Voltage=%.2f",avg);
    return 0;
}
