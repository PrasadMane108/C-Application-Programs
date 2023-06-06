/*Write a program which accept number from user and 
check whether it contains 0 in it or not.
Input:  2395      -1018               1000
Output: No zero   Contains Zero       contains zero
*/
#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("%d contains zero in it\n", iValue);
    }
    else
    {
        printf("%d does not contain zero in it\n", iValue);
    }

    return 0;
}