#include<stdio.h>
int main()
{
    double pi=3.14159,R,volume;
    scanf("%lf",&R);
    volume=(4*pi*pow(R,3))/3;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}
