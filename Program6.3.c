//Write a program to find factorial of below numbers.
//input :  5                 -3            
//output : 120(5*4*3*2*1)    6(3*2*1) 

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n", iValue,iRet);

    return 0;
}