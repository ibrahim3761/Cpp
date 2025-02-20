#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}