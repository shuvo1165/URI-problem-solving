#include<stdio.h>
int main()
{
    double a,b,c,d,e,result;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    result=((a*2)+(b*3)+(c*4)+(d*1))/10;
     printf("Media: %.1f\n",result);
    if(result >=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(result >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1f\n",e);
        result+=e;
        result/=2.0;
        if(result>=5.0)
            printf("Aluno aprovado.\n");
        else{

            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",result);
    }
    else
    {
        printf("Aluno reprovado.\n");
    }

    return 0;
}
