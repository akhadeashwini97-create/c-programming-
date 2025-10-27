#include<stdio.h>
int calculateTotal(int marks[], int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
        sum=sum+marks[i];
    return sum;
}
int main()
{
    int marks[4],i,total;
    printf("Enter 4 Subject Marks: ");
    for(i=0;i<4;i++)
        scanf("%d",&marks[i]);
    total=calculateTotal(marks,4);
    printf("Total Marks=%d",total);
    return 0;
}