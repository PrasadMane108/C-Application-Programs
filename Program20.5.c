/*Accept division of student from user and depends on the division 
display exam timing.There are 4 divisions in school as A,B,C,D.Exam time of division A 
is at 7 AM, B at 8.30 AM,C at 9.20 AM and D at 10.30 AM.
(application shoulde be case insensitive)
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL; 

void DisplaySchedule(char cValue)
{
    if((cValue == 'A') || (cValue == 'a'))
    {
        printf("Your exam is at 7 AM\n");
    }
    else if((cValue == 'b') || (cValue == 'B'))
    {
        printf("Your exam is at 8.30 AM\n");
    }
    else if((cValue == 'c') || (cValue == 'C'))
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if((cValue == 'd') || (cValue == 'D'))
    {
        printf("Your exam is at 10.30 PM\n");
    }
    else
    {
        printf("Invalid division entered\n");
    }
}

int main()
{
    char cDiv = '\0';
    //BOOL = FALSE;

    printf("Enter your division\n");
    scanf ("%c", &cDiv);

    DisplaySchedule(cDiv);

    return 0;
}