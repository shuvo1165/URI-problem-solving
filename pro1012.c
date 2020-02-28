#include<stdio.h>
int main()
{
    double A,B,C,Pi=3.14159,tri,cir,tra,squ,rec;
    scanf("%lf %lf %lf",&A,&B,&C);
    tri=0.5*(A*C);
    cir=Pi*pow(C,2);
    tra=(A+B)/2*C;
    squ=pow(B,2);
    rec=A*B;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf",rec);
    return 0;
}
