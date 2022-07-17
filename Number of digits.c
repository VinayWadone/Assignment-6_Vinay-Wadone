#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&i);
    //k=0;

    for(k=0;i>0;k++)

        i=i/10;


    printf("\n%d\n",k);
    return 0;
}

