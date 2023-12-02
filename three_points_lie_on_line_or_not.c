#include <stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,s1,s2,s3;
    printf("Enter point one \nX1 : ");
    scanf("%lf",&x1);
    printf("\ny1 : ");
    scanf("%lf",&y1);
    printf("\nEnter point two \nX2 : ");
    scanf("%lf",&x2);
    printf("\ny2 : ");
    scanf("%lf",&y2);
    printf("\nEnter point three \nX3 : ");
    scanf("%lf",&x3);
    printf("\ny3 : ");
    scanf("%lf",&y3);
    s1=(y2-y1)/(x2-x1);
    s2=(y3-y2)/(x3-x2);
    if(s1==s2)

    {
        printf("the points lie on same line");
    }
    else{
        printf("the points Does not lie on same line");
    }
    return 0;
}