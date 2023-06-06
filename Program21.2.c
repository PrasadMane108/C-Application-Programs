/* Accept character from user.If character is small then display
its corresponding capital character,and if it ia capital then display
its corresponding small character.In other cases display as it is.   
*/

#include<stdio.h>

void Display(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z')) 
    {
        cValue = cValue - 32;
        printf("Corresponding capital case character is: %c\n",cValue);
    }
    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("Corresponding small case character is: %c\n", cValue);
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