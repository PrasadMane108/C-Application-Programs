//Write a program which accept three numbers from user and returns
//their multiplication.

#include<stdio.h>

float Percentage(int iMax, int iObt)
{
    if(iMax == 0) 
    {
        printf("Invalid total marks\n");
        return 0;
    } 
    else
    {
        return (float) iObt / iMax * 100.0; 
    } 
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f%%\n",fRet);

    return 0;
}