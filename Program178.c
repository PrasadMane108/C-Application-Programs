//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and replace capital with *star and small with doller$  .
//space deun varchya scanf cha enter remove kelay

#include<stdio.h>

void EditString(char *str) //(char str[]) he pan chalel pan tala
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '*';
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
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
