#include<stdio.h>
int main()
{
    int n,cp,sp;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    n=cp-sp;
    if(n<0)
    {
        printf("Loss = Rs %d",n*(-1));
    }
    else if(n==0)
    {
        printf("neither profit nor loss");
    }
    else{
        printf("profit = Rs %d",n);
    }
    return 0;
}