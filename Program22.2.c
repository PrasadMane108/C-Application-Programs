/* Write a program which accept string from user and count small
characters from it.
*/

#include<stdio.h>

int CountSmall(char *str)
{
  int iCount = 0;

  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
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

  iRet = CountSmall(Arr);

  printf("Number of small characters in the string are: %d\n", iRet);

  return 0;
}