#include<stdio.h>
int main()
{
    int a,par[20],impar[20],i,j,k,y=0,z=0;
    for(i=0; i<15; i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            par[y]=a;
            y++;
            if(y==5)
            {
                for(j=0; j<5; j++)
                {
                    printf("par[%d] = %d\n",j,par[j]);
                }
                y=0;
            }
        }
        else
        {
            impar[z]=a;
            z++;
            if(z==5)
            {
                for(j=0; j<5; j++)
                {
                    printf("impar[%d] = %d\n",j,impar[j]);
                }
                z=0;
            }
        }
    }
    for( j = 0; j < z ; j++)
        {
            printf("impar[%d] = %d\n", j, impar[j]);
        }
        for(j = 0; j < y ; j++)
        {
            printf("par[%d] = %d\n", j, par[j]);
        } 
    return 0;
}