//NEW TOPIC
//PROBLEMS ON STRING
//Accept String  and character from user and count occurances of the character.
//varchya scanf madhla enter remove karnyasathi <stdlib.h> header file madhli inbuilt fflush(stdin) method use keli

#include<stdio.h>
#include<stdlib.h>

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
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    fflush(stdin); //inbuilt method from stdlib.h header file

    printf("Enter the character\n");
    scanf("%c", &ch);

    iRet = CountChar(Arr,ch);  //strlenX(100); 100 ha address ahe Arr[10] cha

    printf("Number of occurances in the string are : %d\n", iRet);
    
    return 0;
}
