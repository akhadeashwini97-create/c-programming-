#include<stdio.h>
float avgMarks(int marks[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+marks[i];
    return (float)sum/n;
}
int main()
{
    int marks[3],i;
    float avg;
    printf("Enter Marks of 3 Students: ");
    for(i=0;i<3;i++)
        scanf("%d",&marks[i]);
    avg=avgMarks(marks,3);
    printf("Average Marks=%.2f",avg);
    return 0;
}
