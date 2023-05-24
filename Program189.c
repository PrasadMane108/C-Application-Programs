//NEW TOPIC
//PROBLEMS ON STRING
//concatination concept

#include<stdio.h>

//1 : travel till end of dest
//2 : copy data from src to dest
//3 : write '\0' at the end of dest

//1 : travel till end of dest
  
void strcatX(char *src, char *dest) 
{
    while(*dest != '\0')
    {
        dest++;
    }

//2 : copy data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    //3 : write '\0' at the end of dest
    *dest = '\0';
}
      
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    strcatX(Arr, Brr); //call by address

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
