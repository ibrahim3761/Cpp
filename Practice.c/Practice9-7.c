#include<stdio.h>
int main()
{
    char a[30]="Bangla",b[30]="desh";
    int i,j,length;
    
    length=6;
    for ( i = length,j = 0; b[j]!='\0'; i++,j++)
    {
        a[i]=b[j];
    }
    //a[i]='\0';
    printf("%s\n",a);
    return 0;
}
