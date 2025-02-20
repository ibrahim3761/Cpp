#include <stdio.h>
int main()
{
    int i,x,y,z=0;
    scanf("%d%d",&x,&y);
    if(x>y){
    for ( i = x-1; i > y; i--)
    {
        if (i%2!=0)
        {
            z+=i;
        }
    }
    }
    else{
    for ( i = x+1; i < y; i++)
    {
        if (i%2!=0)
        {
            z+=i;
        }
        
    }
    }
    printf("%d\n",z);
    return 0;
}