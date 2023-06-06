//Write a program which accepts one number from user and
// returns differene between addition of all its factors and non factors.

#include<stdio.h>

int DiffSumFactNonFact(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo -1); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum1 = iSum1 + iCnt;    
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = DiffSumFactNonFact(iValue);

    printf("Difference between addition of factors and Non-factors of %d is: %d\n", iValue,iRet);

    return 0;
}