//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  and character from user and count first occurances of the character.
//space deun varchya scanf cha enter remove kelay

#include<stdio.h>
#include<stdlib.h>

int FirstOccurance(char *str, char cValue) //(char str[]) he pan chalel pan tala
{
    int iCnt = 1; //starting from 1...0 pasun pan karu shkto
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
            
    }
    return iPos;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address


    printf("Enter the character\n");
    scanf(" %c", &ch); //space deun varcha enter remove kela

    iRet = FirstOccurance(Arr,ch);  //Arr  call by address...ch call by value

    printf("First occurance of that character is at : %d\n", iRet);
    
    return 0;
}
