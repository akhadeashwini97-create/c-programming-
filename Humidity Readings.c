#include<stdio.h>
float calculateAverage(int h[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+h[i];
    return (float)sum/n;
}
int main()
{
    int h[6],i;
    float avg;
    printf("Enter 6 Humidity Readings: ");
    for(i=0;i<6;i++)
        scanf("%d",&h[i]);
    avg=calculateAverage(h,6);
    printf("Average Humidity=%.2f",avg);
    return 0;
}