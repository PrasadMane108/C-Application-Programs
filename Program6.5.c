//Write a program which accept number from user and display its table
//in reverse order
//input :    2                              -4
//output :  20 18 16 14 12 10 8 6 4 2     40 36 32 28 24 20 16 12 8 4

#include<stdio.h>
void DisplayTableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iNo * iCnt);    
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayTableRev(iValue);

    return 0;
}