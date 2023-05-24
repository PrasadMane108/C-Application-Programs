//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  and character from user and count last occurances of the character.
//space deun varchya scanf cha enter remove kelay
//using #define ERR_NOTFOUND-1

#include<stdio.h>
#define ERR_NOTFOUND -1

int LastOccurance(char *str, char cValue) //(char str[]) he pan chalel pan tala
{
    int iCnt = 1; //starting from 1..0 pasun pan karu shkto
    int iPos = ERR_NOTFOUND;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
        
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

    iRet = LastOccurance(Arr,ch);  //Arr  call by address...ch call by value
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character");
    }
    else
    {
        printf("First occurance of that character is at : %d\n", iRet);   
    }
    
     return 0;
}
