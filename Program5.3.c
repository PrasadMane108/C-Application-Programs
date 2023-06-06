//Write a program which accept number from user and 
//print its number line.

/*
input: 5
output: -5  -4  -3  -2  -1  0   1   2   3   4   5     
*/

#include<stdio.h>

void DisplayNumberLine(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayNumberLine(iValue);

    return 0;
}