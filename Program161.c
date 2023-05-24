//NEW TOPIC
//PROBLEMS ON STRING
//Accept String from from user and calculate its length
//using user defined string function strlenX()

#include<stdio.h>

int strlenX(char *str) //(char str[]) he pan chalel pan tala
{
    int iCount = 0;

    while(*str != '\0') //jo paryant \0 yet nahi to paryant suru theva
    {
        iCount++;
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

    iRet = strlenX(Arr);  //strlenX(100); 100 ha address ahe Arr[10] cha

    printf("Length of string is: %d\n", iRet);
    
    return 0;
}
