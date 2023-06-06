/*Accept N numbers from user andaccept one another
 number NO and return index of last occurance of that NO.
Input:    N         5   AND NO = 33       N = 4 AND NO =108            4
        elements: 85 33 10 33 11         200  436  118 125
Output:              3                       ERR_NOTFOUND         
*/

#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

int LastOccur(int Arr[], int iLength, int iNo)//step 5:Apply logic to perform operatons
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }
    return iPos;
}

int main()  
{
    int iSize = 0;  
    int *ptr = NULL; 
    int iCnt = 0; 
    int iRet = 0;
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

    iRet = LastOccur(ptr,iSize, iValue); 

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such number\n");
    }
    else 
    {
        printf("Last occurance of number is at: %d\n", iRet);
    }
    //Step 6: Deallocate the memory of array
    free (ptr);
    
    return 0;
}