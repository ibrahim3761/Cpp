#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]= "Ibrahim";
    char b[50]= "Mohammad";
    strcat (b,a);
    printf("%s length %d\n",b, strlen(b));
    return 0;
}