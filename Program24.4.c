/*Write a program which accept string from user and 
accept one character and return the index of last occurance of that character.
in the string or not.
Input  Marvellous and char  n   Mane123 and char M   Mane Prasad and char a
Output  -1                      0                        9
*/

#include<stdio.h>

#define ERR_NOTFOUND -1

int LastChar(char *str, char cValue)
{
  int iCount = 0;
  int iPos = ERR_NOTFOUND;

  while(*str != '\0')
  {
    if(*str == cValue)
    {
      iPos = iCount;
    }
    iCount++;
    str++;
  }
  return iPos;
}

int main()
{
  char Arr[20];
  char ch = '\0';
  int iRet = 0;

  printf("Enter the string\n");
  scanf("%[^'\n']s", Arr); //special scanf

  printf("Enter the character\n");
  scanf(" %c", &ch); //removed enter of special scanf by giving space before %c

  iRet = LastChar(Arr,ch);

  if(iRet == ERR_NOTFOUND)
  {
    printf("There is no such character in the string\n");
  }
  else
  {
    printf("Last occurance of %c in the string is at : %d\n", ch,iRet);
  }

  return 0;
}