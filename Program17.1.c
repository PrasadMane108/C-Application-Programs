
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, k = 0;

    k = 1;
    for(i = 1; i <= iRow; i++) //Outer loop
    {
        for(j = 1; j <= iCol; j++, k++) //Inner loop
        {
            if(k <= 9)
            {
                printf("%d\t",k);
            }
            else
            {
                printf("%d\t",k-9);
            }
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




























