/*Write a program which accept one number from user
and if the number is less than 50 then print small,if it
is greater than 50 and less than 100 then print medium,if it
is greater than 100 print large.
*/

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("%d is smaller than 50\n", iNo);
    }
    else if((iNo >= 50) && (iNo <= 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("%d is greater than 100\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}