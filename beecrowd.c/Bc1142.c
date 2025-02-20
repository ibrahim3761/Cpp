#include<stdio.h>
int main()
{
    int i,j,k,n,x,y=0;
    scanf("%d",&x);
    for ( i =1,j=2,k=3;; i+=4,j+=4,k+=4)
    {
        y++;
        printf("%d %d %d PUM\n",i,j,k);
        if (y==x)
        {
            break;
        }
    }
    return 0;
}