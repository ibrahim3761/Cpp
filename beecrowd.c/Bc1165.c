#include<stdio.h>
int main()
{
    int i,j,x,n,k;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x);
        k=0;
        for ( j = 2; j < x; j++)
        {
            if ((x%j)!=0)
            {
                k++;
            }
        }
        if (k==(x-2))
        {
            printf("%d eh primo\n",x);
        }
        else{
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}