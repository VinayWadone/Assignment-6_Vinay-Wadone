#include<stdio.h>
int main()
{
    int i,j,k;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&j);
    k=0;
    for(i=1;i<=j;i++)
    {
        k=k+i*i*i;

    }
    printf("\n%d\n",k);
    return 0;
}

