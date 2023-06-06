//Write a program which accept name from user and print that name.

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Enter your full name\n");
    scanf("%[^'\n']s", Name);  //special scanf

    printf("Your name is: %s\n", Name);

    return 0;
}