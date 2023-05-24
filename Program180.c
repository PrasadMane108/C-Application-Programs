//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and replace small letter into cap but je small ahe tyach cap madhe ale pahije..eg A for a  .
//space deun varchya scanf cha enter remove kelay
//ASCII table cha first time use
//strupr he inbuilt function ahe apan tyala stuprrX karun userdefined kel..he function small to cap replace karel

#include<stdio.h>

void struprX(char *str) //(char str[]) he pan chalel pan tala
{
    while(*str != '\0')
    {
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; //32 add kelyavar letter chi corresponding value milel ASCII madhli
        }
        str++;
    }
      
}

int main()
{
    char Arr[20];
    

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    struprX(Arr); //call by address

    printf("String after editing is : %s\n", Arr);
    
    return 0;
}
