//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and replace capital letter into small but je capital ahe tyach small madhe ale pahije..eg a for A  .
//space deun varchya scanf cha enter remove kelay
//ASCII table cha first time use
//strlwr he inbuilt function ahe apan tyala strlwrX karun userdefined kel..he function cap to small replace karel

#include<stdio.h>

void strlwrX(char *str) //(char str[]) he pan chalel pan tala
{
    while(*str != '\0')
    {
        
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; //32 add kelyavar letter chi corresponding value milel ASCII madhli
        }
        str++;
    }
      
}

int main()
{
    char Arr[20];
    

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strlwrX(Arr); //call by address

    printf("String after editing is : %s\n", Arr);
    
    return 0;
}
