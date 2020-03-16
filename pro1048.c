#include<stdio.h>
int main()
{
    double x,cal;
    scanf("%lf",&x);
    if(x>=0 && x<=400.00)
    {
        cal=(0.15*x);
        printf("Novo salario: %.2lf\n",x+cal);
        printf("Reajuste ganho: %.2lf\n",cal);
        printf("Em percentual: 15 %%\n");
    }
    else if(x>=400.01 && x<=800.00)
    {
        cal=(0.12*x);
        printf("Novo salario: %.2lf\n",x+cal);
        printf("Reajuste ganho: %.2lf\n",cal);
        printf("Em percentual: 12 %%\n");
    }
    else if(x>=800.01 && x<=1200.00)
    {
        cal=(0.10*x);
        printf("Novo salario: %.2lf\n",x+cal);
        printf("Reajuste ganho: %.2lf\n",cal);
        printf("Em percentual: 10 %%\n");
    }
    else if(x>=1200.01 && x<=2000.00)
    {
        cal=(0.07*x);
        printf("Novo salario: %.2lf\n",x+cal);
        printf("Reajuste ganho: %.2lf\n",cal);
        printf("Em percentual: 7 %%\n");
    }
    else if(x>2000.00)
    {
        cal=(0.04*x);
        printf("Novo salario: %.2lf\n",x+cal);
        printf("Reajuste ganho: %.2lf\n",cal);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
