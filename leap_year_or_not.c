#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}