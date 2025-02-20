#include <stdio.h>
int main() {
    int i;
    double x, n[100];
    scanf("%lf", &x);
    n[0] = x;
    printf("N[0] = %.4lf\n", n[0]);
    for (i = 1; i < 100; i++) {
        n[i] = x / 2;
        x = n[i];
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
    return 0;
}
