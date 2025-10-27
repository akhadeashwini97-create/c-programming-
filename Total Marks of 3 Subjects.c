#include<stdio.h>
int totalMarks(int m[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+m[i];
    return sum;
}
int main()
{
    int m[3],i,total;
    printf("Enter Marks of 3 Subjects: ");
    for(i=0;i<3;i++)
        scanf("%d",&m[i]);
    total=totalMarks(m,3);
    printf("Total Marks=%d",total);
    return 0;
}