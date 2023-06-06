/* Write a program which accept string from user and count
number of white spaces in the string.
*/
//Input   Marvellous    Mane Prasad
//Output  0                1

#include<stdio.h>

int CountSpaces(char *str)
{
  int iCount = 0;

  while(*str != '\0')
  {
    if(*str == ' ')
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

  iRet = CountSpaces(Arr);//call by address

  printf("Number of white spaces in the string are: %d\n", iRet);
  
  return 0;
}