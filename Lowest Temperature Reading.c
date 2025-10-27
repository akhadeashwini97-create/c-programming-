#include<stdio.h>
int minTemp(int t[], int n)
{
    int i,min=t[0];
    for(i=1;i<n;i++)
        if(t[i]<min)
            min=t[i];
    return min;
}
int main()
{
    int t[5],i,min;
    printf("Enter 5 Temperature Readings: ");
    for(i=0;i<5;i++)
        scanf("%d",&t[i]);
    min=minTemp(t,5);
    printf("Lowest Temperature=%d",min);
    return 0;
}