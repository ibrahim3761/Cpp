#include <stdio.h>

int main() 
{
    int i;
    double s=0, x=1.0;
    for ( i = 1; i < 39; i+=2)
    {
        s+= i/x;
        x+=x;
    }
    printf("%.2f",s);
    return 0;
}
