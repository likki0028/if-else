#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if(n>=0)
    {
        printf("%d",n);
    }
    else{
        n=n*(-1);
        printf("%d",n);
    }
return 0;
}