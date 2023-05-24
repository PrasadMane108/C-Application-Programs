//NEW TOPIC
//PROBLEMS ON STRING
//Accept String from from user and count 'z' in it.

#include<stdio.h>

int CountChar(char *str) //(char str[]) he pan chalel pan tala
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'z')
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

    iRet = CountChar(Arr);  //strlenX(100); 100 ha address ahe Arr[10] cha

    printf("Count of z in the string : %d\n", iRet);
    
    return 0;
}
