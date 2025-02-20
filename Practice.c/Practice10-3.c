#include<stdio.h>

struct Record
{
    char name[10];
    char phoneno[15];
    char email[15];
};

int main()
{
    struct Record a;
    printf("Enter the name:\n");
    scanf("%s", &a.name);

    printf("Enter the phone no:\n");
    scanf("%s", &a.phoneno);

    printf("Enter the email:\n");
    scanf("%s", &a.email);

    printf("Name: %s, Phone: %s, Email: %s\n", a.name, a.phoneno, a.email);

    return 0;
}