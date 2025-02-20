#include <stdio.h>
#include <ctype.h>
int main()
{
    char n;
 
    scanf("%c", &n);
 
    if(isupper(n)){ 
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if(islower(n)) {
        printf("ALPHA\nIS SMALL\n");
    }
    else if(isascii(n)) {
        printf("IS DIGIT\n");
    }
 
    return 0;
}
