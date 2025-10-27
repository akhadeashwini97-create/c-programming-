#include<stdio.h>
int findMin(int num[], int n)
{
    int i,min=num[0];
    for(i=1;i<n;i++)
        if(num[i]<min)
            min=num[i];
    return min;
}
int main()
{
    int num[5],i,min;
    printf("Enter 5 Numbers: ");
    for(i=0;i<5;i++)
        scanf("%d",&num[i]);
    min=findMin(num,5);
    printf("Minimum Number=%d",min);
    return 0;
}