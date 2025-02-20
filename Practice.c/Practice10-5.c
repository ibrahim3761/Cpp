#include<stdio.h>
int main()
{
    freopen("c:\\C Programming\\in.txt","r",stdin);
    freopen("c:\\C Programming\\out.txt","w",stdout);
    int num1, num2, sum;
    while (2== scanf("%d%d", &num1, &num2))
    {
        sum= num1 + num2 ;
        printf("Sum is :%d\n",sum);
    }
    return 0;
}