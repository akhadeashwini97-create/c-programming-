#include<stdio.h>
float avgResistance(int r[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+r[i];
    return (float)sum/n;
}
int main()
{
    int r[5],i;
    float avg;
    printf("Enter 5 Resistance Values: ");
    for(i=0;i<5;i++)
        scanf("%d",&r[i]);
    avg=avgResistance(r,5);
    printf("Average Resistance=%.2f",avg);
    return 0;
}