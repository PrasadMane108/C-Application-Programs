/* Write a program which accept string from user and convert it
into upper case.
*/
//Input Marvellous Multi OS
//Output marvellous multi os

#include<stdio.h>

void struprX(char *str)
{
  while(*str != '\0')
  {
    if((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - 32;
    }
    str++;
  }  
}

int main()
{
  char Arr[20];

  printf("Enter the string:\n");
  scanf("%[^'\n']s", Arr); //special scanf

  struprX(Arr);//call by address

  printf("Modified string is: %s\n", Arr);
  
  return 0;
}