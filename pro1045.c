#include<stdio.h>
#include<math.h>
float first,second,third,temp;
void calculaton()
{
    if(first>=second+third)
        {
        printf("NAO FORMA TRIANGULO\n");
        return;
        }
    if(pow(first,2)==pow(second,2)+pow(third,2))
        printf("TRIANGULO RETANGULO\n");
    if(pow(first,2)>pow(second,2)+pow(third,2))
        printf("TRIANGULO OBTUSANGULO\n");
    if(pow(first,2)<pow(second,2)+pow(third,2))
        printf("TRIANGULO ACUTANGULO\n");
    if(first==second && second==third)
        printf("TRIANGULO EQUILATERO\n");
    if((first==second && second!=third)||(first==third && third!=second)||(second==third) && third!=first)
        printf("TRIANGULO ISOSCELES\n");

    return;

}

int main()

{
    scanf("%f %f %f",&first,&second,&third);

    if(first>=second && second>=third)
    {
        calculaton();
    }
    else if(first>=second && third>=second)
    {
        if(first>=third)
        {
            temp=second;
            second=third;
            third=temp;

            calculaton();
        }
        else
        {
            temp=first;
            first=third;
            third=temp;

            temp=second;
            second=third;
            third=temp;

            calculaton();
        }
    }
    else if(second>=first)
    {
        if( first>=third)
        {
            temp=first;
            first=second;
            second=temp;

            calculaton();
        }
        else if(second>=third)
        {
            temp=first;
            first=second;
            second=temp;

            temp=second;
            second=third;
            third=temp;

            calculaton();
        }
        else if(third>=second)
        {
            temp=first;
            first=third;
            third=temp;

            calculaton();
        }

    }
    return 0;
}
