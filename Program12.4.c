/*Accept N numbers from user and display
all such numbers which contains 3 digits in it.
Input:    N            6                              N = 4         
        elements: 152 6663 340 50 23625        1201  20    36   156
Output:             152   340                         156                    
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    
    printf("\n3 digit numbers from the array are : ");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
        {
            printf("%d\t", Arr[iCnt]);
        }    
    }
}

int main()  
{
    int iSize = 0;  
    int *iptr = NULL; 
    int iCnt = 0; 
    
    //Step 1:Accept number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    if(iSize < 0)//updater
    {
        iSize = -iSize;
    }

    //Step 2: Allocate memory dynamically

    iptr = (int*)malloc(iSize * (sizeof(int)));

    if(iptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    else
    {
        printf("\nMemory allocated successfully\n");
    }

    //Step 3:Accept values from user

    printf("\nEnter %d elements:\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &iptr[iCnt]);
    }
    
    //Display these values
    printf("\nElements of array are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",iptr[iCnt]);
    }
    //Step 4:Pass the array to helper function

    Digits(iptr, iSize);

    //Step 6: Deallocate the memory of array

    free (iptr);

    printf("\n\nMemory deallocated successfully\n");
    
    return 0;
}