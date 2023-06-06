//Write a program which accept three numbers from user and returns
//their multiplication.

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 == 0) || (iNo2 == 0) || (iNo3 == 0))
    {
        printf("Please enter values other than 0\n");
        return 0;
    }
    else
    {
        return iNo1 * iNo2 * iNo3;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three number\n");
    scanf("%d %d %d", &iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of above three numbers is :%d\n",iRet);

    return 0;
}