#include<stdio.h>
float avgSpeed(int speed[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+speed[i];
    return (float)sum/n;
}
int main()
{
    int speed[5],i;
    float avg;
    printf("Enter 5 Speed Readings: ");
    for(i=0;i<5;i++)
        scanf("%d",&speed[i]);
    avg=avgSpeed(speed,5);
    printf("Average Speed=%.2f",avg);
    return 0;
}