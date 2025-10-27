#include<stdio.h>
float avgAge(int age[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+age[i];
    return (float)sum/n;
}
int main()
{
    int age[5],i;
    float avg;
    printf("Enter Age of 5 Students: ");
    for(i=0;i<5;i++)
        scanf("%d",&age[i]);
    avg=avgAge(age,5);
    printf("Average Age=%.2f",avg);
    return 0;
}
