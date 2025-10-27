#include<stdio.h>
int totalWeight(int w[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+w[i];
    return sum;
}
int main()
{
    int w[4],i,total;
    printf("Enter Weight of 4 Objects: ");
    for(i=0;i<4;i++)
        scanf("%d",&w[i]);
    total=totalWeight(w,4);
    printf("Total Weight=%d",total);
    return 0;
}