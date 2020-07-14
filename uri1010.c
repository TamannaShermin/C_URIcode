#include<stdio.h>
int main()
{
    int cp1,npup1,cp2,npup2;
    double ppup1,ppup2,z,x,y;
    scanf("%d%d%lf",&cp1,&npup1,&ppup1);
    scanf("%d%d%lf",&cp2,&npup2,&ppup2);
    x=npup1*ppup1;
    y=npup2*ppup2;
    z=x+y;
    printf("VALOR A PAGAR: R$ %.2lf\n",z);
    return 0;

}
