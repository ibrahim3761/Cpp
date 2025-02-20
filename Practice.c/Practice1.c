#include <stdio.h>

int main()
{
    int num[5], i, x, n = 5, z, y, sum = 0;
    for(i = 0; i < n; i++){
    scanf("%d", &num[i]);
    }
    scanf("%d", &z);
    for(i = 0; i <n ; i++){
    if (num[i] == z)
      y = i;
    
    }
    if(y == -1)
     printf("NF\n");
    else printf("F %d\n", y );
    
    return 0;
}
