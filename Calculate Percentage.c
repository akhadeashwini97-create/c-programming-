#include<stdio.h>
float calculatePercentage(int total, int outof)
{
    return (float)total/outof*100;
}
int main()
{
    int total,outof;
    printf("Enter Total Marks and Out of: ");
    scanf("%d%d",&total,&outof);
    printf("Percentage=%.2f",calculatePercentage(total,outof));
    return 0;
}