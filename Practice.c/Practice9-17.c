#include<stdio.h>
#include<string.h>
int main()
{
    char a[50]= "Ibrahim";
    char b[50];
    strcpy(b,a);
    printf("%s\n",a);
    printf("%s\n",b);
    return 0;
}