/*Accept N numbers from user andaccept one another
 number NO and check whether NO is present or not.
Input:    N         5   AND NO = 33       N = 4 AND NO =108            4
        elements: 85 33 3 80 11         200  436  118 125
Output:            TRUE                         FALSE         
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkNumber(int Arr[], int iLength, int iNo)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(Arr[iCnt] == iNo)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}

int main()  
{
    int iSize = 0;  
    int *ptr = NULL; 
    int iCnt = 0; 
    BOOL bRet = FALSE;
    int iValue = 0;

    //Step 1:Accept number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    //Accept one another number from user

    printf("Enter another number\n") ;
    scanf("%d", &iValue);

    //Step 2: Allocate memory dynamically
    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    //Step 3:Accept values from user
    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    //Display these values
    printf("Elements of array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    //Step 4:Pass the array to helper function

    bRet = ChkNumber(ptr,iSize, iValue); 

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else 
    {
        printf("Number is not present\n");
    }
    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}