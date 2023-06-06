//Accept character from user and check whether it is digit or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c", &ch);

    bRet = CheckDigit(ch);

    if(bRet == TRUE)
    {
        printf("%c is a digit\n", ch);
    }
    else
    {
        printf("%c is not a digit\n", ch);
    }

    return 0;
}