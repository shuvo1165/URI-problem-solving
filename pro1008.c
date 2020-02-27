#include<stdio.h>
int main()
{
    int EN,NH;
    double MH,TS;
    scanf("%d%d%lf",&EN,&NH,&MH);
    TS=NH*MH;
    printf("NUMBER = %d\n",EN);
    printf("SALARY = U$ %.2lf\n",TS);
    return 0;

}
