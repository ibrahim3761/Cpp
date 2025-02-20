/*#include <stdio.h>
#define cube(x) x*x*x
int main()
{
    /*int items[8] = {3, 7, 9, 2, 1, 4, 0, 5};
    int *p = items;

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", *p);
        p++;
    }
    int x=36/cube(6);
    printf("%d",x);

    return 0;
}*/
#include <stdio.h>
#include <string.h>
int Identical(char *str)
{
 int n = strlen(str);
 for (int i = 1; i < n; i++)
 {
 if (str[i] != str[0])
 return 0;
 }
 return 1;
}
int main()
{
 char arr[100];
 scanf("%s", &arr);
 if(Identical(arr))
 printf("Identical.");
 else
 printf("Not Identical.");
 return 0;
}
