#include<stdio.h>
int calculateTotal(int readings[], int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
        sum=sum+readings[i];
    return sum;
}
int main()
{
    int readings[5],i,total;
    printf("Enter 5 Sensor Readings: ");
    for(i=0;i<5;i++)
        scanf("%d",&readings[i]);
    total=calculateTotal(readings,5);
    printf("Total Sensor Reading=%d",total);
    return 0;
}