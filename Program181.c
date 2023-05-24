//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and replace capital letter into small and small into capital using strtoggle inbuilt function apan tyala strtoggleX karunuser defined kel
//space deun varchya scanf cha enter remove kelay
//ASCII table cha first time use
//strtoggle he inbuilt fun ahe apan tyala strtoggleX karun user defined kel..he fun AT A TIME small to cap and cap to small karel

#include<stdio.h>

void strtoggleX(char *str) //(char str[]) he pan chalel pan tala
{
    while(*str != '\0')
    {
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; //32 add kelyavar letter chi corresponding value milel ASCII madhli
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
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
