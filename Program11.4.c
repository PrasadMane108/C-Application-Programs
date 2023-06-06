/*Accept N numbers from user and accept range,
Display all elements from that range.
Input:    N         5   AND Range = 30 to 40       N = 4 AND range = 100 to 120            4
        elements: 85 33 10 40 11                    262  128  99 125
Output:              33  40                                   
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()  
{
    int iSize = 0;  
    int *ptr = NULL; 
    int iCnt = 0; 
    int iValue1 = 0;
    int iValue2 = 0;

    //Step 1:Accept number of elements from user
    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    //Accept range from user

    printf("Enter starting point\n") ;
    scanf("%d", &iValue1);

    printf("Enter ending point\n") ;
    scanf("%d", &iValue2);

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

    DisplayRange(ptr,iSize, iValue1, iValue2); 

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}