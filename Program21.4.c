/*Accept character from user and check whether it is special symbol or not
(!,@,#,$,%,^,&,*) 
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char cValue)
{
    if((cValue == '!')||(cValue == '@')||(cValue == '#')||(cValue == '$')
    ||(cValue == '%')||(cValue == '^')||(cValue == '&')||(cValue == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character\n");
    scanf("%c", &ch);

    bRet = ChkSpecial(ch);

    if(bRet == TRUE)
    {
        printf("%c is a special symbol\n", ch);
    }
    else
    {
        printf("%c is not a special symbol\n", ch);
    }

    return 0;
}