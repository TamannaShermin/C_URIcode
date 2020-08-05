#include<stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g,r1,r2,r3,r4,r5,r6;
    scanf("%d",&N);
    printf("%d\n",N);
    a=N/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    r1=N%100;
    b=r1/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    r2=r1%50;
    c=r2/20;
    printf("%d nota(s) de R$ 20,00\n",c);
    r3=r2%20;
    d=r3/10;
    printf("%d nota(s) de R$ 10,00\n",d);
    r4=r3%10;
    e=r4/5;
    printf("%d nota(s) de R$ 5,00\n",e);
    r5=r4%5;
    f=r5/2;
    printf("%d nota(s) de R$ 2,00\n",f);
    r6=r5%2;
    g=r6/1;
    printf("%d nota(s) de R$ 1,00\n",g);
    return 0;



}

