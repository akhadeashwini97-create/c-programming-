#include<stdio.h>
float avgSpeed(int s[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+s[i];
    return (float)sum/n;
}
int main()
{
    int s[5],i;
    float avg;
    printf("Enter Speed of 5 Cars: ");
    for(i=0;i<5;i++)
        scanf("%d",&s[i]);
    avg=avgSpeed(s,5);
    printf("Average Speed=%.2f",avg);
    return 0;
}
