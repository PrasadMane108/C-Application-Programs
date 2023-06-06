//Write a program which accepts one number from user and
// display its factors in descending order.

#include<stdio.h>

void FactDesc(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
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

    FactDesc(iValue);

    return 0;
}