#include<stdio.h> 
int main() 
{ 
    int t, n, a, i, j, sum1, sum2; 
    scanf("%d", &t); 
 
    for(i = 0; i < t; i++) 
    { 
        scanf("%d", &n); 
        sum1 = 0; 
        sum2 = 0; 
 
        for(j = 0; j < n; j++) 
        { 
            scanf("%d", &a); 
 
            if(n % 2 == 0) 
            { 
                if(a % 2 == 0) 
                { 
                    sum1 += a; 
                } 
                else if(a % 2 != 0) 
                { 
                    sum2 += a; 
                } 
 
            } 
            else if(n % 2 != 0) 
            { 
                if(a % 2 == 0) 
                { 
                    sum1 += a; 
                } 
                else if(a % 2 != 0) 
                { 
                    sum2 += a; 
                } 
 
            } 
        } 
        if(sum1 > sum2) 
            printf("YES\n"); 
        else if(sum1 <= sum2) 
            printf("NO\n"); 
 
    } 
 
    return 0; 
}