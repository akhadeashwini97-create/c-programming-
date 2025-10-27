#include<stdio.h>
float calculateAverage(int voltage[], int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
        sum=sum+voltage[i];
    return (float)sum/n;
}
int main()
{
    int voltage[3],i;
    float avg;
    printf("Enter 3 Voltage Readings: ");
    for(i=0;i<3;i++)
        scanf("%d",&voltage[i]);
    avg=calculateAverage(voltage,3);
    printf("Average Voltage=%.2f",avg);
    return 0;
}