//Write a program which accepts one number from user and
// perform multiplication of its factors.

#include<stdio.h>

typedef unsigned long int ULINT;

ULINT MultiFact(int iNo)
{
    int iCnt = 0;
    ULINT iMult = 1;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    ULINT  iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = MultiFact(iValue);

    printf("Multiplication of factors of %d is : %d\n", iValue,iRet);

    return 0;
}