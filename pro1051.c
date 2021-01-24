#include<stdio.h>
int main()
{
    double x,vat;
    scanf("%lf",&x);
    if(x>=0 && x<=2000.00)
    {
        printf("Isento\n");
    }
    else if(x>=2000.01 && x<=3000.00)
    {
        vat=(x-2000)*0.08;
        printf("R$ %.2lf\n",vat);
    }
    else if(x>=3000.01 && x<=4500.00)
    {
        x=x-3000;
        vat=(1000*0.08)+(x*0.18);
        printf("R$ %.2lf\n",vat);
    }
    else if(x>4500.00 )
    {
        x=x-4500;
        vat=(1000*0.08)+(1500*0.18)+(x*0.28);
        printf("R$ %.2lf\n",vat);
    }
    return 0;
}
