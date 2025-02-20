#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(b >= c && d >= a)
    {
        if(c >= a)
        {
            if(b <= d)
                printf("%d %d\n", c, b);
            else if(b >= d)
                printf("%d %d\n", c, d);   
        }
        else if(c <= a)
        {
            if(b <= d)
                printf("%d %d\n", a, b);
            else if(b >= d)
                printf("%d %d\n", a, d);
        }
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}