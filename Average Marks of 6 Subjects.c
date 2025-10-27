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
    int m[6],i;
    float avg;
    printf("Enter Marks of 6 Subjects: ");
    for(i=0;i<6;i++)
        scanf("%d",&m[i]);
    avg=avgMarks(m,6);
    printf("Average Marks=%.2f",avg);
    return 0;
}