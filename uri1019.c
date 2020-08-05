#include<stdio.h>
int main()
{
    int N,h,m,s,r1;
    scanf("%d",&N);
    h=N/3600;
    r1=N%3600;
    m=r1/60;
    s=r1%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}

