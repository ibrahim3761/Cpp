#include <stdio.h>
int main()
{
    int n,sum,start,dif,end;
    printf("Enter the starting NO,diff between NO,ending NO:\n");
    scanf("%d%d%d",&start,&dif,&end);
    for ( n = start,sum=0 ;n <= end ;n=n+dif)
    {
    sum=sum+n;
    }
    printf("Sum is:%d\n",sum);    
    return 0;
}