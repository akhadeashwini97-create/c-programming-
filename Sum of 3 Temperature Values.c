#include<stdio.h>
int totalTemp(int t[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+t[i];
    return sum;
}
int main()
{
    int t[3],i,total;
    printf("Enter 3 Temperature Values: ");
    for(i=0;i<3;i++)
        scanf("%d",&t[i]);
    total=totalTemp(t,3);
    printf("Total Temperature=%d",total);
    return 0;
}