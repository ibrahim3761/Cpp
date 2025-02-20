#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x/1000;
    if (y%2==0)
    {
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    return 0;
}