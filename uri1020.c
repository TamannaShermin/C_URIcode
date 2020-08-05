#include<stdio.h>
int main()
{
    int N,y,m,d,r1;
    scanf("%d",&N);
    y=N/365;
    r1=N%365;
    m=r1/30;
    d=r1%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}

