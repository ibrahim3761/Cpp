#include <stdio.h>
int main()
{
    int n,i;
    double x,y,div;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%lf %lf",&x,&y);
        if (y==0)
        {
            printf("divisao impossivel\n");
        }
        else{
        div= x/y;
        printf("%0.1lf\n",div);
        }
    }
    return 0;
}