#include<stdio.h>
int main()
{
    int i,k,a,e=0,o=0,p=0,n=0;
    scanf("%d",&k);
    for ( i = 1; i <= k; i++)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            e++;
        }
        else if (a%2!=0)
        {
            o++;
        }
        if (a>0)
        {
            p++;
        }
        if (a<0)
        {
            n++;
        }
    }
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);

    return 0;
}