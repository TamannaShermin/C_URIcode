#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,n=3.14159,x,y,z,m,v;
    scanf("%lf%lf%lf",&A,&B,&C);
    x=.5*A*C;
    y=n*pow(C,2);
    z=.5*C*(A+B);
    m=pow(B,2);
    v=A*B;
    printf("TRIANGULO: %.3lf\n",x);
    printf("CIRCULO: %.3lf\n",y);
    printf("TRAPEZIO: %.3lf\n",z);
    printf("QUADRADO: %.3lf\n",m);
    printf("RETANGULO: %.3lf\n",v);
    return 0;

}
