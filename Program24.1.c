/*Write a program which accept string from user and 
accept one character.Check whether that character is present
in the string or not.
Input  Marvellous and char  n   Mane123 and char M
Output  false                     true
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char cValue)
{
  while(*str != '\0')
  {
    if(*str == cValue)
    {
      break;
    }
    str++;
  }
  if(*str != '\0')
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
  char Arr[20];
  char ch = '\0';
  BOOL bRet = FALSE;

  printf("Enter the string\n");
  scanf("%[^'\n']s", Arr); //special scanf

  printf("Enter the character\n");
  scanf(" %c", &ch); //removed enter of special scanf by giving space before %c

  bRet = ChkChar(Arr,ch);

  if(bRet == TRUE)
  {
    printf("Character found in the string\n");
  }
  else
  {
    printf("Character not found in the string\n");
  }

  return 0;
}