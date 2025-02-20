#include <stdio.h>
int main()
{
    char ch;
    printf("Please Enter a Character:\n");
    scanf("%c", &ch);
    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Vowel\n");
    }
    if (ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='u')
    {
        printf("Vowel\n");
    }
    else{
        printf("Consonent\n");
    }
    return 0;
}