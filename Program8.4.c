/*Write a program which accept number from user and 
returns multiplication of its digits.
Input:  2394      -4018     2500  
Output:  216        32        10    
*/
#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits of %d is : %d\n",iValue,iRet);

    return 0;
}