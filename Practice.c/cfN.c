#include <stdio.h>
#include<ctype.h>
 
int main()
{
    char n;
 
    scanf("%c", &n);
 
    if(islower(n)) printf("%c\n",toupper(n));
    if(isupper(n)) printf("%c\n",tolower(n));
 
    return 0;
}
