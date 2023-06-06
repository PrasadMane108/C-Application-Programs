/*Accept N numbers from user and count frequency
 of 11 in it.
Input:  N           5                   4
        elements: 85 33 3 80 11     10  20  31 22
Output:            1                       0         
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    int iCount = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet = Frequency(ptr,iSize); 

    printf("Frequency of 11 is : %d\n", iRet);

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}