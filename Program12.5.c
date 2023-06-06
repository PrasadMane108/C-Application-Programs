/*Accept N numbers from user and display
summation of digits of EACH number.
Input:    N            6                              N = 4         
        elements: 152 63 340  50  236        1201  20    36   -156
Output:            8   9   7  5    11          4    2     9               
*/
//using one for and one while loop

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    int iDigit = 0;
    int iSum = 0;
    
    printf("\nSummation of digits for each number in the array is : ");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        while(Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        } 
        printf("%d\t", iSum);
        iSum = 0; //iSum should be 0 for the next element
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

    DigitsSum(iptr, iSize);

    //Step 6: Deallocate the memory of array

    free (iptr);

    printf("\n\nMemory deallocated successfully\n");
    
    return 0;
}