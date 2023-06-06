/*Accept N numbers from user and display all such
elements which are even and divisible by 5.
Input:  N           6
        elements: 85 66 3 80 93 88
Output:   85   80
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 2) == 0) && ((Arr[iCnt] % 5) == 0))
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

    DisplayEven(ptr,iSize); 

    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}