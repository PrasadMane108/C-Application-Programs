/*Write a program which accept number from user and 
count frequency of 2 in it.
Input:  2395      -2018     1225  1359
Output:  1          1        2      0
*/
#include<stdio.h>

#define ERR_NOTFOUND -1

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Digit two is not present in %d\n", iValue);
    }
    else
    {
        printf("Count of two in %d is :%d\n", iValue,iRet);
    }

    return 0;
}