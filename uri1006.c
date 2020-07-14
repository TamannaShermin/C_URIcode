#include<stdio.h>
int main()
{
   double A,B,C,a=2,b=3,c=5,x;
    scanf("%lf%lf%lf",&A,&B,&C);
    x=(a*A+b*B+c*C)/(a+b+c);
    printf("MEDIA = %.1lf\n",x);
    return 0;


}


