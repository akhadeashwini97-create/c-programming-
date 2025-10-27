#include<stdio.h>
float avgBattery(int v[], int n)
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
    printf("Enter 4 Battery Voltages: ");
    for(i=0;i<4;i++)
        scanf("%d",&v[i]);
    avg=avgBattery(v,4);
    printf("Average Battery Voltage=%.2f",avg);
    return 0;
}