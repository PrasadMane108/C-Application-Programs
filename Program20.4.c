//Accept character from user and check whether it is small case or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = CheckSmall(ch);

    if(bRet == TRUE)
    {
        printf("%c is a small case character\n", ch);
    }
    else
    {
        printf("%c is not a small case character\n", ch);
    }

    return 0;
}