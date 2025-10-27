#include<stdio.h>
int findMax(int num[], int n)
{
    int i,max=num[0];
    for(i=1;i<n;i++)
        if(num[i]>max)
            max=num[i];
    return max;
}
int main()
{
    int num[5],i,max;
    printf("Enter 5 Numbers: ");
    for(i=0;i<5;i++)
        scanf("%d",&num[i]);
    max=findMax(num,5);
    printf("Maximum Number=%d",max);
    return 0;
}