#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    printf("enter c");
    scanf("%d",&c);
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))
    printf("the numbers can be sides of a triangle");
    else
    printf("the numbers can not be sides of a triangle");
    return 0;
}