#include<stdio.h>
#include<math.h>
int main()
{
    double R,x,n=3.14159;
    scanf("%lf",&R);
    x=(4.0/3)*n*pow(R,3);
    printf("VOLUME = %.3lf\n",x);
    return 0;

}

