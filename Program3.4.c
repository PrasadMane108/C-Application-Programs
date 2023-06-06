//Write a program which accepts one number from user and
// returns addition of its all non factors.

#include<stdio.h>

int AddNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo -1); iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;    
        }
    }
    return iSum;    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    iRet = AddNonFact(iValue);

    printf("Addition of Non-factors of %d is: %d\n", iValue,iRet);

    return 0;
}