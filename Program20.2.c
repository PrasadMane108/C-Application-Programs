//Accept character from user and check whether it is capital or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool CheckCap(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
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

    bRet = CheckCap(ch);

    if(bRet == TRUE)
    {
        printf("%c is a capital character\n", ch);
    }
    else
    {
        printf("%c is not a capital character\n", ch);
    }

    return 0;
}