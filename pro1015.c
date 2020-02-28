#include<stdio.h>
int main()
{
    double x1,x2,y1,y2,x,y,result;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    x=x2-x1;
    y=y2-y1;
    result=sqrt(pow(x,2)+pow(y,2));
    printf("%.4lf\n",result);
    return 0;
}
