/*Write a program which accept number from user and 
count frequency of 4 in it.
Input:  2394      -4018     1225  1454
Output:  1          1        0      2
*/
#include<stdio.h>

#define ERR_NOTFOUND -1

int CountFour(int iNo)
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
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Digit four is not present in %d\n", iValue);
    }
    else
    {
        printf("Count of four in %d is :%d\n", iValue,iRet);
    }

    return 0;
}