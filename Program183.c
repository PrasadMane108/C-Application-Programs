//NEW TOPIC
//PROBLEMS ON STRING
//space deun varchya scanf cha enter remove kelay
//string copy using strcpy inbuilt function apan tyala strcpyX karun user defined kel
// 193 code bagha to code strncpy fun use karun ghetla ahe...jevdhe vicharle tevdhech character copy hotil

#include<stdio.h>

void strcpyX(char *src, char *dest) 
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }    
    *dest = '\0';  //implicitly \0 dyaycha karan ha source madhun copy nahi honar 
}
      
int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strcpyX(Arr, Brr); //call by address

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
