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
    int v[5],i;
    float avg;
    printf("Enter 5 Voltage Values: ");
    for(i=0;i<5;i++)
        scanf("%d",&v[i]);
    avg=avgVoltage(v,5);
    printf("Average Voltage=%.2f",avg);
    return 0;
}