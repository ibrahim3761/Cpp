#include <stdio.h>

int main() {
    int i;
    double s = 0;
    for ( i = 1; i <= 100; i++)
    {
        s+=1.0/i;
    }
    printf("S = %.2lf", s);
    return 0;
}
