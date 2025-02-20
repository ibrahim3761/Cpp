#include<stdio.h>
int main()
{
    int i,n,min=10000000,pos=0;
    scanf("%d",&n);
    int x[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x[i]);
        if (min>x[i])
        {
            min=x[i];
            pos=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",pos);
    return 0;
}