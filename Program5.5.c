//Write a program which accept N number from user and 
//print first 5 multiples of N.

/*
input: 4 
output: 4   8   12  16  20     
*/

#include<stdio.h>

void DisplayMultiples(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    DisplayMultiples(iValue);

    return 0;
}