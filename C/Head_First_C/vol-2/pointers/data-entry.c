#include<stdio.h>

int main()
{
    char first_name[20];
    char last_name[20];
    int age;
    printf("Enter your first name and last name: ");
    scanf("%20s %20s", first_name, last_name);
    printf("Enter your age: ");
    scanf("%i", &age);
    printf("Your info: \vFirst: %s\vSecond: %s\vAge: %i\n", first_name, last_name, age);
    return 0;
}