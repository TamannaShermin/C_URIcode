#include<stdio.h>
int main()
{
    double N;
    int x,a,b,c,d,e,f,g,h,i,j,k,l,r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11;

    scanf("%lf",&N);
    x=N*100;
    printf("NOTAS:\n");
    a=(x/100)/100;
    printf("%d nota(s) de R$ 100.00\n",a);
    r1=x%10000;
    b=(r1/50)/100;
    printf("%d nota(s) de R$ 50.00\n",b);
    r2=r1%5000;
    c=(r2/20)/100;
    printf("%d nota(s) de R$ 20.00\n",c);
    r3=r2%2000;
    d=(r3/10)/100;
    printf("%d nota(s) de R$ 10.00\n",d);
    r4=r3%1000;
    e=(r4/5)/100;
    printf("%d nota(s) de R$ 5.00\n",e);
    r5=r4%500;
    f=(r5/2)/100;
    printf("%d nota(s) de R$ 2.00\n",f);
    printf("MOEDAS:\n");
    r6=r5%200;
    g=r6/100;
    printf("%d moeda(s) de R$ 1.00\n",g);
    r7=r6%100;
     h=r7/50;
     printf("%d moeda(s) de R$ 0.50\n",h);
     r8=r7%50;
     i=r8/25;
     printf("%d moeda(s) de R$ 0.25\n",i);
     r9=r8%25;
     j=r9/10;
     printf("%d moeda(s) de R$ 0.10\n",j);
     r10=r9%10;
     k=r10/5;
     printf("%d moeda(s) de R$ 0.05\n",k);
     r11=r10%5;
     l=r11/1;
     printf("%d moeda(s) de R$ 0.01\n",l);
    return 0;
}

