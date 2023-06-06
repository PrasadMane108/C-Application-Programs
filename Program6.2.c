//Write a program which accept  single digit number from user and print it into words.
//input :  9         -3            12
//output : Nine     Three       Invalid number

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if((iNo < 0) || (iNo > 9)) //filter
    {
        printf("Invalid number\n");
        return;
    }
    
    for(iCnt = iNo; iCnt <= 9; iCnt--)
    {
        if(iNo == 0)
        {
            printf("Zero\n");
            break;
        }
        else if(iNo == 1)
        {
            printf("One\n");
            break;
        }   
        else if(iNo == 2)
        {
            printf("Two\n");
            break;
        }
        else if(iNo == 3)
        {
            printf("Three\n");
            break;
        }
        else if(iNo == 4)
        {
            printf("Four\n");
            break;
        }
        else if(iNo == 5)
        {
            printf("Five\n");
            break;
        }
        else if(iNo == 6)
        {
            printf("Six\n");
            break;
        }
        else if(iNo == 7)
        {
            printf("Seven\n");
            break;
        }
        else if(iNo == 8)
        {
            printf("Eight\n");
            break;
        }
        else
        {
            printf("Nine\n");
            break;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}