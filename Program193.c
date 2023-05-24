//NEW TOPIC
//PROBLEMS ON STRING
//space deun varchya scanf cha enter remove kelay
//same code  as 183 only strncpy fun... jevdhe character vicharle tevdhech copy hotil

#include<stdio.h>

void strcpyX(char *src, char *dest, int iLength) 
{
    while((*src != '\0') && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }    
    *dest = '\0';  //implicitly \0 dyaycha karan ha source madhun copy nahi honar 
}
      
int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    printf("Enter number of characters that you want to copy\n");
    scanf("%d", &iNo);

    strcpyX(Arr, Brr, iNo); 

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
