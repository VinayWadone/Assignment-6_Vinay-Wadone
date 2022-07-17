#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&j);
    k=0;l=1;
    for(i=1;l<=j;i=i+2)
    {
        k=k+i;
        l++;

    }
    printf("\n%d\n",k);
    return 0;
}

