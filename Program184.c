//NEW TOPIC
//PROBLEMS ON STRING
//space deun varchya scanf cha enter remove kelay
//string copy using strcpy inbuilt function apan tyala strcpyX karun user defined kel
//copy only small

#include<stdio.h>

void strcpysmallX(char *src, char *dest) 
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;  //abnormal symbol ignore karnyasathi dest++ aat ghetla
        }
        src++;
        
    }    
    *dest = '\0';  //implicitly \0 dyaycha karan ha source madhun copy nahi honar 
}
      
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strcpysmallX(Arr, Brr); //call by address

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
