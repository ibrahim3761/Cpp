#include<stdio.h>
int main()
{
    char ch = 'k';
    char capital = ch - 'a'+ 'A';
    printf("Capital of %c is %c", ch, capital);
    return 0;
}