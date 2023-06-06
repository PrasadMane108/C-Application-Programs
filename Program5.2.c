//Write a program which accept number from user and 
//print numbers till that number.

/*
input: 8
output: 1   2   3   4   5   6   7   8   
*/

#include<stdio.h>

void DisplayNumbers(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayNumbers(iValue);

    return 0;
}