#include<stdio.h>
int totalVoltage(int v[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+v[i];
    return sum;
}
int main()
{
    int v[5],i,sum;
    printf("Enter 5 Voltage Values: ");
    for(i=0;i<5;i++)
        scanf("%d",&v[i]);
    sum=totalVoltage(v,5);
    printf("Total Voltage=%d",sum);
    return 0;
}
