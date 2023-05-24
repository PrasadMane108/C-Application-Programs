//NEW TOPIC
//PROBLEMS ON STRING
//space deun varchya scanf cha enter remove kelay
//string copy using strcpy inbuilt function apan tyala strcpyX karun user defined kel
//copy toggle 

#include<stdio.h>

void strcpytoggleX(char *src, char *dest) 
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z')) //cap to small
        {
            *dest = *src + 32;
        
        }
        else if((*src >= 'a') && (*src <= 'z')) //small to cap
        {
            *dest = *src - 32;
            
        }
        else
        {
            *dest = *src;
        }
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

    strcpytoggleX(Arr, Brr); //call by address

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
