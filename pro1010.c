#include<stdio.h>
int main()
{
    int pcode,pcode2;
    double unit,unit2,price,price2,total;
    scanf("%d %lf %lf",&pcode,&unit,&price);
    scanf("%d %lf %lf",&pcode2,&unit2,&price2);
    total=(unit*price)+(unit2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}
