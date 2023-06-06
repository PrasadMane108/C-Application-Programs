/* Write a program which accept string from user and return difference
between frequencies of small and capital characters.
*/

#include<stdio.h>

int Difference(char *str)
{
  int iSmall = 0;
  int iCap = 0;

  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      iSmall++;
    }
    else if((*str >= 'A') && (*str <= 'Z'))
    {
      iCap++;
    }
    str++;
  }

  return iSmall - iCap;
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  iRet = Difference(Arr);

  printf("Difference between frequencies of small and capital character is: %d\n", iRet);

  return 0;
}