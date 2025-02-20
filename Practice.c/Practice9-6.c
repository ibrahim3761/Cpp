#include<stdio.h>
int main()
{
    char str[30]="BANGLA";
    int i;
    for ( i = 5; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}