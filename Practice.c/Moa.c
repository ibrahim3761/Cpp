#include <stdio.h>
int main()
{
    int n,i,j,c,a=-1,b=3,count=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i==1)
        {
            printf("%d is not prime\n",a);
            break;
        }
        else if (i==2)
        {
            printf("%d is not prime\n",b);
            break;
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
        }
    }
    for ( j = 2; i <c-1 ; i++)
    {
        if (c%i!=0)
        {
            count++;
        }
        else{
            break;
        }
    }
    if (count==0)
    {
        printf("%d is prime\n",c);
    }
    else{
        printf("%d is not prime\n",c);
    }
     return 0;
}