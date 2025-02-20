#include <stdio.h>
int main()
{
    int i,n,m,x=0;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&m);
        if (m>x)
        {
            x=m;
        }
    }
    printf("%d\n",x);
    return 0;
}
