/*Write a program which accept string from user and 
accept one character and return the frequency of that character.
in the string or not.
Input  Marvellous and char  n   Mane123 and char M
Output  0                     1
*/

#include<stdio.h>

int CountChar(char *str, char cValue)
{
  int iCount = 0;

  while(*str != '\0')
  {
    if(*str == cValue)
    {
      iCount++;
    }
    str++;
  }
  return iCount;
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

  iRet = CountChar(Arr,ch);

  printf("Frequency of %c in the string is : %d\n", ch,iRet);
  
  return 0;
}