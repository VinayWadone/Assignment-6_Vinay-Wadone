#include<stdio.h>
int main()
{
    int i,j,k,rem;
    printf("\n\nEnter a number of your choice\n\n");
    scanf("%d",&i);
    j=2;
    k=2;
    while(j<i)

    {       rem=i%j;
            if(rem==0) j=i;
            k++;j++;
        }
        //printf("\n\nK = %d\n\n",k);

        printf(k==j?"\n\nIts a Prime number\n\n":"\n\nIts NOT a Prime number\n\n");

       return 0;
}

