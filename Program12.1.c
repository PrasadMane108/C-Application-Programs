/*Accept N numbers from user and return
the largest number.
Input:    N         6                       N = 4         
        elements: 15 66 3 40 50 236        120  20    36   -156
Output:               236                           120                 
*/

#include<stdio.h>
#include<stdlib.h>

int Largest(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    int iMax = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()  
{
    int iSize = 0;  
    int *ptr = NULL; 
    int iCnt = 0; 
    int iRet = 0;

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

    iRet = Largest(ptr,iSize); 

    printf("Largest number is : %d\n", iRet);

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}