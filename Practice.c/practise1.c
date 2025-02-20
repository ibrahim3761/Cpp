/*#include<stdio.h>
int main()
{
    int i,n,x,m=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if (x>m)
        {
            m=x;
        }
        
    }
    printf("%d\n",m);

}*/
#include<stdio.h>
int main()
{
    int n, i, j, x, mul;
    scanf("%d", &n);
    for( i = 1,j = 1; i <= n,j <= x; i++,j++)
        {
            mul = 1;
            scanf("%d", &x);
            mul = mul * j;
            printf("%d\n", mul);
        }
    return 0;

}
