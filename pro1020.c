#include<stdio.h>
int main()
{
    int x,a,b,c;
    scanf("%d",&x);
    a=x/365;
    b=(x%365)/30;
    c=(x%365)%30;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",b);
    printf("%d dia(s)\n",c);
    return 0;
}
