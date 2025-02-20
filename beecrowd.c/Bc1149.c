#include<stdio.h>
int main()
{
    int a,n,i,j,sum=0;
    scanf("%d",&a);
    for ( i = 1;; i++)
    {
        scanf("%d",&n);
        if (n>0)
        {
            break;
        }
        else if (n<0)
        {
            continue;
        }
    }    
        for ( j = 0; j < n; j++)
        {
            sum=sum+a+j;
        }
    
    printf("%d\n",sum);
    return 0;
}