/*#include <stdio.h> 
 
int main() 
{ 
    int a, b, i, sum; 
 
    while(1) 
    { 
        sum = 0; 
        scanf("%d%d", &a, &b); 
        if(a <= 0 || b <= 0) break; 
        if(b > a) 
        { 
            printf("%d",a);
            for(i=a+1; i <= b; i++) 
            { 
                sum+=i; 
                printf(" %d",i); 
            } 
            printf(" sum =%d\n",sum+a); 
        } 
        else if(a>b) 
        {
            printf("%d",b); 
            for(i = b+1; i <= a;i++) 
            { 
                sum+=i; 
                printf(" %d",i); 
            } 
            printf(" sum =%d\n",sum+b); 
            sum = 0; 
        } 
    } 
    return 0; 
}*/
#include<stdio.h>
int main()
{
    int a, b, c=0, i, sum = 0;
 
    while(1)
    {
        scanf("%d%d", &a, &b);
        if(a <= 0 || b <= 0)
        {
            break;
        }
        if(b < a)
        {
            c=a;
            a=b;
            b=c;
        }
        sum = 0;
 
        for(i = a; i <= b; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }
}