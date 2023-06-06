//Write a program which accept N number from user and 
//print all odd numbers upto N.

/*
input: 18
output: 1   3   5   7   9   11  13  15  17      
*/

#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayOdd(iValue);

    return 0;
}