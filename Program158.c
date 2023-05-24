//NEW TOPIC
//PROBLEMS ON STRING
// print name
//name will print with white space

#include<stdio.h>


int main()
{
    char Arr[10];

    printf("Enter your name\n");
    scanf("%[^'\n']s", Arr); //SPECIAL scanf AHE ITHE..joparyant enter dabat nahi toparyant input gheil..
                            //that is navachya madhe space asla tari te input ghevun display karel...no need of & operator BCOZ array name itself contains address

    printf("Your name is: %s\n", Arr);
    
    return 0;
}
