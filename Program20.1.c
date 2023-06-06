//Accept character from user and check whether it is alphabet or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckAlpha(char cValue)
{
    if(((cValue >= 'a') && (cValue <= 'z')) || ((cValue >= 'A') && (cValue <= 'Z')))
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

    bRet = CheckAlpha(ch);

    if(bRet == TRUE)
    {
        printf("%c is a character\n", ch);
    }
    else
    {
        printf("%c is not a character\n", ch);
    }

    return 0;
}