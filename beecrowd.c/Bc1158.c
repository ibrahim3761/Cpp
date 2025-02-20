#include <stdio.h>
int main()
{
    int i,j,x,sum;
    for ( i = 0;; i++)
    {
        sum=0;
        scanf("%d",&x);
        if (x==0)
        {
            break;
        }
        
        if (x%2!=0){
            x++;
        }
        for ( j = 0; j < 5; j++)
        {
            sum+=x;
            x+=2;
        }
        printf("%d\n",sum);
    }
    return 0;  
}
