#include<stdio.h>
float avgHeight(int h[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+h[i];
    return (float)sum/n;
}
int main()
{
    int h[4],i;
    float avg;
    printf("Enter Height of 4 Students: ");
    for(i=0;i<4;i++)
        scanf("%d",&h[i]);
    avg=avgHeight(h,4);
    printf("Average Height=%.2f",avg);
    return 0;
}