#include <stdio.h>
int main()
{
    int i,j;
    for (i = 1; i <=10; i++)
    {
        j=0;
        while (j<=10)
        {
            printf("i=%d,j=%d\n",i,j);
            j=j+1;
        }    
    }
    return 0;
}

