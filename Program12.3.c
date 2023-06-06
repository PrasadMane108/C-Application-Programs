/*Accept N numbers from user and return
difference between largest and smallest number.
Input:    N         6                       N = 4         
        elements: 15 66 3 40 50 236        120  20    36   156
Output:               233(236 - 3)               36(156-120)                    
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    
    for(iCnt = 1; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if(Arr[iCnt] < iMin) 
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax - iMin;
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

    iRet = Difference(ptr,iSize); 

    printf("Difference between largest and smallest number is : %d\n", iRet);

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}