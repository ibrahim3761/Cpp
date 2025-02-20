#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a digit:\n");
    scanf("%c",&ch);
    if (ch>='0'&& ch<='9')
    {
        printf("Digit\n"); 
    }
    else{
        printf("Not a digit\n");
    }
}