
/*
Input : iRow = 3  iCol = 5
Output : 5  4   3   2   1
         5  4   3   2   1
         5  4   3   2   1
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++) //Outer loop
    {
        for(j = iCol; j >= 1; j--) //Inner loop
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}




























