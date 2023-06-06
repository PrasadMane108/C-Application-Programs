/*Accept N numbers from user and return difference
between summation of even and odd elements.
Input:  N           6
        elements: 85 66 3 80 88
Output: 53(234-181)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)//step 5:Apply logic to perform operations
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    return iSum1 - iSum2;
}

int main() //Entry point function 
{
    int iSize = 0;  //To store the size of array
    int *ptr = NULL; //To store the address of array
    int iCnt = 0;  //Loop counter
    int iRet = 0; //to store return value returned by helper function
    
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

    printf("Output is: %d\n", iRet); //Display output

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}