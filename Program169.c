//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  and character from user and count occurances of the character in the string.
//varchya scanf madhla enter remove karnyasathi optional method use keli scanf(" %c",&ch);

#include<stdio.h>

int CountChar(char *str, char cValue) //(char str[]) he pan chalel pan tala
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    printf("Enter the character\n");
    scanf(" %c", &ch); //%c agoder space dila...

    iRet = CountChar(Arr,ch);  //strlenX(100); 100 ha address ahe Arr[10] cha

    printf("Number of occurances of the given character in the string are : %d\n", iRet);
    
    return 0;
}
