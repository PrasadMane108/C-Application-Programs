//NEW TOPIC
//PROBLEMS ON STRING
// print name ..name will print till first white space

#include<stdio.h>


int main()
{
    char Arr[20];

    printf("Enter your name\n");
    scanf("%s", Arr); //no need of & operator BCOZ array name itself contains address

    printf("Your name is: %s\n", Arr);
    
    return 0;
}
