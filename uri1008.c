#include<stdio.h>
int main()
{
    int num,wha;
    double apwh,salary;
    scanf("%d%d",&num,&wha);
    scanf("%lf",&apwh);
    printf("NUMBER = %d\n",num);
    salary=apwh*wha;
    printf("SALARY = U$ %.2lf\n",salary);
    return 0;
}
