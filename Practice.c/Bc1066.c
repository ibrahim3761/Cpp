#include <stdio.h>
int main() {
    int i,z=0,y=0,k=0,l=0;
    int x;
    for ( i = 0; i < 5; i++) {
        scanf("%d", &x);
        if (x%2==0) {
            z++;
        }
        else if (x%2!=0 )
        {
            y++;
        }
        if (x>0)
        {
            k++;
        }
        else if (x<0)
        {
            l++;
        }    
    }
    printf("%d valor(es) par(es)\n", z);
    printf("%d valor(es) impar(es)\n", y);
    printf("%d valor(es) positivo(s)\n", k);
    printf("%d valor(es) negativo(s)\n", l);
    return 0;
}

