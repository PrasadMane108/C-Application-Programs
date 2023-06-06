/*Accept number of rows and columns from user and display below pattern
Input   iRow = 4        iCol = 4
Output  *   *   *   #
        *   *   #   @
        *   #   @   @
        #   @   @   @
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  if(iRow != iCol) //filter
  {
    printf("Invalid matrix\n");
    return;
  }

  for(i = iRow; i >= 1; i--)//Backward outer loop
  {
    for(j = 1; j <= iCol; j++)//forward inner loop
    {
      if(i > j)
      {
        printf("*\t");
      }
      else if(i == j)
      {
        printf("#\t");
      }
      else
      {
        printf("@\t");
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns:\n");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
