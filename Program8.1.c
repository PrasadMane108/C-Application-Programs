/*Write a program which accept number from user and 
returns the count of even digits.
Input:  2394      -4018     7193  
Output:  2          3        0      
*/
#include<stdio.h>

#define ERR_NOTFOUND -1

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }    
    if(iCount == 0)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCount;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Even digits not found in %d\n", iValue);
    }
    else
    {
        printf("Count of even digits in %d is :%d\n", iValue,iRet);
    }

    return 0;
}