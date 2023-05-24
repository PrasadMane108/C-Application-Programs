//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  from user and display small and capital characteers in it
//space deun varchya scanf cha enter remove kelay

#include<stdio.h>

void Frequency(char *str) //(char str[]) he pan chalel pan tala
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCnt++;    
        }
        str++;
    } 
    printf("Small case character count : %d\n", iSmallCnt); 
    printf("Capital case character count : %d\n", iCapCnt);   
}

int main()
{
    char Arr[20];
    

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    Frequency(Arr); //call by address
    
    return 0;
}
