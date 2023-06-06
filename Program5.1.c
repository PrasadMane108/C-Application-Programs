//Write a program which accept number from user and 
//print that number of $ * on the screen.

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayPattern(iValue);

    return 0;
}