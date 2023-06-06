/* Write a program which accept string from user and check
whether it contains vowels or not.
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowels(char *str)
{
  int iCount = 0;

  while(*str != '\0')
  {
    if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') ||(*str == 'u')
    || (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
    {
      iCount++;
      break;
    }
    str++;
  }
  if(iCount >= 1)
  {
    return true;
  }
  else
  {
  return false;
  }
}

int main()
{
  char Arr[20];
  bool bRet = false;

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  bRet = ChkVowels(Arr);

  if(bRet == true)
  {
    printf("String contains vowels in it\n");
  }
  else
  {
    printf("There is no vowel in the string\n");
  }
  return 0;
}