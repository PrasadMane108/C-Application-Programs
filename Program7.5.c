/*Write a program which accept number from user and 
count frequency of digits which are less than 6.
Input:  2394      -4018     7898  
Output:  3          2        0      
*/
#include<stdio.h>

#define ERR_NOTFOUND -1

int CountDigits(int iNo)
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
        if(iDigit <= 6)
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

    iRet = CountDigits(iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Digits smaller than 6 are not present in %d\n", iValue);
    }
    else
    {
        printf("Count of digits which are smaller than 6 in %d is :%d\n", iValue,iRet);
    }

    return 0;
}