#include <stdio.h>
int main()
{
    int j, k, l, x, count=0;
    scanf("%d", &x);
    for(j=1, k=2, l=3; ; j+=4, k+=4, l+=4)
    {
        count+=1;
        printf("%d %d %d PUM\n", j, k, l);
        if(count==x)
        { 
        break;
        }
    }
    return 0;
}