#include<stdio.h>
int main()
{
    double x,y;
    printf("enter X : ");
    scanf("%lf",&x);
    printf("enter Y : ");
    scanf("%lf",&y);
    if((x==0) && (y==0))
    {
        printf("the point is on the origin");
    }
    else if((x==0)&&(y!=0))
    {
        printf("the point lies on the y axis");
    }
    else if((x!=0)&&(y==0))
    {
        printf("The point lies ont he x axis");
    }
    else{
        printf("the point lies in the 2D palne");
    }
    return 0;
}