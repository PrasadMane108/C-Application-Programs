/*Accept N numbers from user and check whether
 these numbers contains 11 in it or not.
Input:  N           5                   4
        elements: 85 33 3 80 11     10  20  31 22
Output:            11 is present     11 is absent    
*/

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkNumber(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(Arr[iCnt] == 11)
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

    //Step 1:Accept number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

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

    bRet = ChkNumber(ptr,iSize); 

    if(bRet == TRUE)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }
    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}