#include<stdio.h>
float avgMarks(int m[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+m[i];
    return (float)sum/n;
}
int main()
{
    int m[2],i;
    float avg;
    printf("Enter Marks of 2 Students: ");
    for(i=0;i<2;i++)
        scanf("%d",&m[i]);
    avg=avgMarks(m,2);
    printf("Average Marks=%.2f",avg);
    return 0;
}
