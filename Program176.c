//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and replace white space  with underscore .
//space deun varchya scanf cha enter remove kelay

#include<stdio.h>

void EditString(char *str) //(char str[]) he pan chalel pan tala
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
      
}

int main()
{
    char Arr[20];
    

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    EditString(Arr); //call by address

    printf("String after editing is : %s\n", Arr);
    
    return 0;
}
