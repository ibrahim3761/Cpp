#include<stdio.h>
#include<math.h>
int main()
{
    int a,c;
    long long b,d;
    double e,f;
    scanf("%d %lld %d %lld",&a,&b,&c,&d);
    e= b*log(a);
    f= d*log(c);
    if (e>f)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}