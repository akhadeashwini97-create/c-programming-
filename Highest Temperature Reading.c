#include<stdio.h>
int maxTemp(int t[], int n)
{
    int i,max=t[0];
    for(i=1;i<n;i++)
        if(t[i]>max)
            max=t[i];
    return max;
}
int main()
{
    int t[5],i,max;
    printf("Enter 5 Temperature Readings: ");
    for(i=0;i<5;i++)
        scanf("%d",&t[i]);
    max=maxTemp(t,5);
    printf("Highest Temperature=%d",max);
    return 0;
}