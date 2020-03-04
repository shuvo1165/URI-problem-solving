#include<stdio.h>
int main()
{
    int arr[3],arr2[3],i,j,temp;
    for(i=0; i<3; i++)
        scanf("%d",&arr[i]);

    for(i=0; i<3; i++)
        arr2[i]=arr[i];

    for(i=0; i<3; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for(i=0; i<3; i++)
        printf("%d\n",arr[i]);

    printf("\n");

    for(i=0; i<3; i++)
        printf("%d\n",arr2[i]);

    return 0;

}
