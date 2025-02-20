#include <stdio.h>

int main() {
    int i,j,t,n,k;
    scanf("%d",&t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        k=n%10;
        printf("%d",k);
        n=n/10;
        while(n > 0) {
            k=n%10;
            printf(" %d",k);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}
