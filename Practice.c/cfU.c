#include<stdio.h>
int main()
{
    float n,m;
    int x;
    scanf("%f",&n);
    x=n;
    m=n-x;
    if (m==0)
    {
        printf("int %d\n",x);
    }
    else{
        printf("float %d %0.3f\n",x,m);
    }
    return 0;
}