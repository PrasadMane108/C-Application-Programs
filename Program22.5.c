/* Write a program which accept string from user and display
it in reverse order..
*/

#include<stdio.h>

void strrevX(char *str)
{
  char *start = NULL;
  char *end = NULL;
  char temp = '\0';

  start = str;
  end = str;

  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
  
}

int main()
{
  char Arr[20];

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  strrevX(Arr);//call by address

  printf("Reverse string is: %s\n", Arr);
  
  return 0;
}