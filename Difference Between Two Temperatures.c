#include<stdio.h>
int difference(int t1, int t2)
{
    return t1-t2;
}
int main()
{
    int t1,t2;
    printf("Enter Two Temperatures: ");
    scanf("%d%d",&t1,&t2);
    printf("Difference=%d",difference(t1,t2));
    return 0;
}