/* Accept character from user and display its ASCII value in 
  decimal,hexadecimal and octal format.
*/ 

#include<stdio.h>

void DisplayASCII(char cValue)
{
    printf("Character is %c with its ASCII values in decimal,octal and hexadecimal format are : %d\t%o\t%x\n", cValue,cValue,cValue);
}

int main()
{
    char ch = '\0';

    printf("Enter the character\n");
    scanf("%c", &ch);

    DisplayASCII(ch);

    return 0;
}