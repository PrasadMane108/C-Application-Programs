//Write a program which accept two numbers from user and check whether
//they are equal or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEqualNumbers(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number\n");
    scanf("%d", &iValue1);

    printf("Enter second number\n");
    scanf("%d", &iValue2);

    bRet = ChkEqualNumbers(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Both numbers are equal\n");
    }
    else
    {
        printf("Both numbers are different\n");
    }

    return 0;
}