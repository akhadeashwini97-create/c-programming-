#include<stdio.h>
int findDifference(int arr[], int n)
{
    int i,max=arr[0],min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    return max-min;
}
int main()
{
    int arr[5],i,diff;
    printf("Enter 5 Readings: ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    diff=findDifference(arr,5);
    printf("Difference=%d",diff);
    return 0;
}
