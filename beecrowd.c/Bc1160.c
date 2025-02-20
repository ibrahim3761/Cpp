#include <stdio.h>

int main() {
    int i,n, year;
    long long int a, b;
    double c,d;
    scanf("%d",&n);
    for (i = 1; i<= n; i++) {
        scanf("%lld %lld %lf %lf",&a,&b,&c,&d);
        year=0;
        while(a<=b) {
            a*=(1+c*0.01);
            b*=(1+d*0.01);
            year++;
            if (year>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (year<=100) 
        {
            printf("%d anos.\n",year);
        }
    }
    return 0;
}