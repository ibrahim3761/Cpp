#include<stdio.h>

struct Record
{
    char name[10];
    char phoneno[15];
    char email[100];
};

int main()
{
    struct Record a[2];

    int i;

    for (i = 0; i < 2; i++)
    {
    printf("Enter the name:\n");
    scanf("%s", &a[i].name);

    printf("Enter the phone no:\n");
    scanf("%s", &a[i].phoneno);

    printf("Enter the email:\n");
    scanf("%s", &a[i].email);
    
    }
    
    for ( i = 0; i < 2; i++)
    {
        printf("Name: %s, Phone: %s, Email: %s\n", a[i].name, a[i].phoneno, a[i].email);
    }

    return 0;
}