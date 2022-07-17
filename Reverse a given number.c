#include<stdio.h>
int main()
        {
            int a,b,c,i,j;
            printf("\n\nEnter a number\n\n");
            scanf("%d",&i);
                for(j=1;i>0;j++)
                {
                   a=i%10;
                   i=i/10;
                   b=i;
                   c=a+c*10;
                }
                printf("\n\nRevised number = %d\n\n",c);

             return 0;
        }

