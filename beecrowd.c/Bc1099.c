#include <stdio.h>
int main()
{
    int n,x,y,i,sum=0,tot=0,j,k;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            for ( j =y+1 ; j < x; j++)
            {
                if (j%2!=0)
                {
                    sum+=j; 
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
        else if (x<y)
        {
            for ( k = x+1; k < y; k++)
            {
                if (k%2!=0)
                {
                    sum+=k;
                }
            } 
            printf("%d\n",sum);
            sum=0;
        }
        else if (x==y)
        {
            printf("%d\n",sum);
        }
        
    }
    return 0;
}