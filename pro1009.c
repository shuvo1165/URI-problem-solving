#include<stdio.h>
int main()
{
    char name[10];
    double salary,tsale,cal,total;
    scanf("%s%lf%lf",&name,&salary,&tsale);
    cal=(tsale*15)/100;
    total=salary+cal;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
