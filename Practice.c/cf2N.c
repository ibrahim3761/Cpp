#include <stdio.h>

int main() {
    char s;
    int n, i, j, x;
    scanf("%c%d", &s, &n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &x);
        for (j = 0; j < x; j++) 
        {
            printf("%c", s);
        }
        printf("\n");
    }
    return 0;
}
