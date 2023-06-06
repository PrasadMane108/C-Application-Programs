/* Write a program which accept string from user and displays
only digits from string.
*/
//Input   Marvellous123     demo
//Output  123              .....

#include<stdio.h>

void DisplayDigits(char *str)
{
  while(*str != '\0')
  {
    if((*str >= '0') && (*str <= '9'))
    {
      printf("%c", *str);
    }
    str++;
  }
} 

int main()
{
  char Arr[20];

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  DisplayDigits(Arr);//call by address
  
  return 0;
}