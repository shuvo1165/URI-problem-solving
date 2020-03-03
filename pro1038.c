#include<stdio.h>
int main()
{
    int x,y;
    double pay;
    scanf("%d %d",&x,&y);
    switch(x)
    {
    case 1:
        pay=y*4.00;
        break;
    case 2:
        pay=y*4.50;
        break;
    case 3:
        pay=y*5.00;
        break;
    case 4:
        pay=y*2.00;
        break;
    case 5:
        pay=y*1.50;
        break;
    }
    printf("Total: R$ %.2lf\n",pay);
    return 0;
}
