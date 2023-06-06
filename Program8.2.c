/*Write a program which accept number from user and 
returns the count of odd digits.
Input:  2394      -4018     2468  
Output:  2          1         0    
*/
#include<stdio.h>

#define ERR_NOTFOUND -1

int CountOdd(int iNo)
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
        if((iDigit % 2) != 0)
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

    iRet = CountOdd(iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Odd digits not found in %d\n", iValue);
    }
    else
    {
        printf("Count of odd digits in %d is : %d\n", iValue,iRet);
    }

    return 0;
}