#include<stdio.h>
int main()
{
    int strh,strm,endh,endm,durh,durm;
    scanf("%d %d %d %d",&strh,&strm,&endh,&endm);

    durh=endh-strh;
    durm=endm-strm;
    if(durh<0 && durm<0)
    {
        durh--;
    }
    if(durh<0)
    {
        durh+=24;
    }
    if(durh==1 && durm<0)
    {
        durh=0;
    }

    if(strh==endh && durm<0)
    {
        durh=23;
    }
    if(durm<0)
    {
        durm+=60;
    }

    if(strh==endh && strm==endm)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",durh,durm);

    return 0;
}
