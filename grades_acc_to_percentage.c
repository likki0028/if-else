#include<stdio.h>
int main()
{
    int n;
    printf("enter percentage");
    scanf("%d",&n);
    if( n>90 && n<=100 )
    {
        printf("Excellent");
    }
    else if( n>80 && n<=90)
    {
        printf("Very Good");
    }
    else if( n>70 && n<=80)
    {
        printf("Good");
    }
    else if(n>60 && n<=70)
    {
        printf("can do better");
    }
    else if(n>50 && n<=60)
    {
        printf("Average");
    }
    else if(n>=40 && n<=50)
    {
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}