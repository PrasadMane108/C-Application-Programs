/* Accept character from user.If it is capital then display all the
characters from the input characters till Z.If input character is small
then display all the characters in reverse order till a.In other cases
display derectly.
*/

#include<stdio.h>

void Display(char cValue)
{
    int iCnt = 0;

    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        for(iCnt = cValue; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        for(iCnt = cValue; iCnt >= 'a'; iCnt--)
        {
            printf("%c\t", iCnt);
        }
    }
    else
    {
        printf("%c\n", cValue);
    }
}

int main()
{
    char ch = '\0';

    printf("Enter the character\n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}