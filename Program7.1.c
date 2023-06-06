/*Write a program which accept number from user and display
its digits in reverse order.
Input:  2395    -1018   1000
Output: 5         8       0  
        9         1       0  
        3         0       0   
        2         1       1   
*/
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    
    if(iNo < 0)//updater
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}