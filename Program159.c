//NEW TOPIC
//PROBLEMS ON STRING
//Accept String from from user and calculate its length
//using inbuilt string function strlen()

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    iRet = strlen(Arr);

    printf("Length of string is: %d\n", iRet);
    
    return 0;
}
