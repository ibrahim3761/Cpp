#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if (a+b==c)
        {
            printf("+\n");
        }
        else if (a-b==c)
        {
            printf("-\n");
        }
    }
    return 0;
}