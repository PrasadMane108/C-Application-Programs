//NEW TOPIC
//PROBLEMS ON STRING
//Accept String from from user and calculate digits  from it

#include<stdio.h>

int strlenDigitsX(char *str) //(char str[]) he pan chalel pan tala
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    iRet = strlenDigitsX(Arr);  //strlenX(100); 100 ha address ahe Arr[10] cha

    printf("Number of digits in the string : %d\n", iRet);
    
    return 0;
}
