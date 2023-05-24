//NEW TOPIC
//PROBLEMS ON STRING
//copy the string reversely 
//same program in for loop FOR Reverse travel

#include<stdio.h>

void strcpyrevX(char *src, char *dest) 
{
    int iLength = 0;

    while(*src != '\0')
    {
        src++;
        iLength++;     
    }

    src--;

    for(; iLength != 0; iLength--)// first step is empty
    {
        *dest = *src;
        src--;
        dest++;
    
    }
    *dest = '\0';
}
      
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strcpyrevX(Arr, Brr); //call by address

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
