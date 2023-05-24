//NEW TOPIC
//PROBLEMS ON STRING
//concatination concept
// string madhle jevdhe letter copy karayche tevdhech karnyasathi code..for that inbuilt fun is strncat

#include<stdio.h>

//1 : travel till end of dest
//2 : copy data from src to dest
//3 : write '\0' at the end of dest

 //1 : travel till end of dest
  
void strncatX(char *src, char *dest, int iLength) 
{
    while(*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';  //for space between 2 string
    dest++;

//2 : copy data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }

    //3 : write '\0' at the end of dest
    *dest = '\0';
}
      
int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s ", Arr); // SPECIAL scanf AHE ITHE..no need of & operator BCOZ array name itself contains address

    printf("Enter the numbers of letters you want to concate\n");
    scanf("%d", &iNo);

    strncatX(Arr, Brr,iNo); 

    printf("String after copy is : %s\n", Brr);
    
    return 0;
}
