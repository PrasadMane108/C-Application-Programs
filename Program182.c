//NEW TOPIC
//PROBLEMS ON STRING
//space deun varchya scanf cha enter remove kelay
//ASCII table cha first time use
//32 aivji 'a' - 'A'; navacha Gap variable

#include<stdio.h>

void strtoggleX(char *str) //(char str[]) he pan chalel pan tala
{
    int Gap = 'a' - 'A';

    while(*str != '\0')
    {
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;
        }
        str++;
    }
      
}

int main()
{
    char Arr[20];
    

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strtoggleX(Arr); //call by address

    printf("String after editing is : %s\n", Arr);
    
    return 0;
}
