
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol) //filter
    {
        printf("Invalid input\n");
        return ;
    }

    for(i = iRow; i >= 1; i--) //Backward Outer loop
    {
        for(j = 1; j <= i; j++) //Inner loop
        {
            printf("*\t");
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




























