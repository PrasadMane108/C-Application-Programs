//Accept two numbers from user,and display first number in second number of times.

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    if(iNo2 < 0)//updater
    {
        iNo2 = -iNo2;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\t", iNo1);
    }    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first number\n");
    scanf("%d", &iValue1);

    printf("Enter second number\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}