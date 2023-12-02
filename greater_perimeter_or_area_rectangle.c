#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("enter length :");
    scanf("%d",&l);
     printf("enter breadth :");
    scanf("%d",&b);
    p=2*(l+b);
    a=l*b;
    if(a>p)
    {
        printf("Area is greater");
    }
    else if (a=p)
    {
        printf("area is equal to perimeter");
    }
    else
    {
        printf("perimeter is greater than area");
    }
    return 0;
}