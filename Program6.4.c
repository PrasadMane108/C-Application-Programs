//Write a program which accept number from user and display its table

//input :    2                              -4
//output :  2 4 6 8 10 12 14 16 18 20    4 8 12 16 20 24 28 32 36 40

#include<stdio.h>
void DisplayTable(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo * iCnt);    
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}