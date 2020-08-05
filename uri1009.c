#include<stdio.h>
   int main()
   {
       double fs,ts,x;
       char N[1000];
       scanf("%s",N);
       scanf("%lf%lf",&fs,&ts);
       x=fs+(ts*.15);
       printf("TOTAL = R$ %.2lf\n",x);
       return 0;
   }

