/* Write a program which accept string from user and count capital
characters from it.
*/

#include<stdio.h>

int CountCapital(char *str)
{
  int iCount = 0;

  while(*str != '\0')
  {
    if((*str >= 'A') && (*str <= 'Z'))
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
  int iRet = 0;

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  iRet = CountCapital(Arr);

  printf("Number of capital characters in the string are: %d\n", iRet);

  return 0;
}