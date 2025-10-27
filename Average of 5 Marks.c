#include<stdio.h>
float calculateAverage(int marks[], int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
        sum=sum+marks[i];
    return (float)sum/n;
}
int main()
{
    int marks[5],i;
    float avg;
    printf("Enter 5 Subject Marks: ");
    for(i=0;i<5;i++)
        scanf("%d",&marks[i]);
    avg=calculateAverage(marks,5);
    printf("Average Marks=%.2f",avg);
    return 0;
}