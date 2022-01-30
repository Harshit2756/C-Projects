#include <stdio.h>
//Harshit khandelwal
/*Q Write a program to accept marks of five courses and compute the result. If student scores aggregate greater than 75%, then the grade is distinction.If aggregate is 60 and 75 then the grade is first division.If aggregate is 50 and 60, then the grade is second division. If aggregate is 40 and 50 then the grade is third division.If aggregate is 40 then student is fail.*/

int main()
{
    float Total_subjects = 5 ,Percentage , Total=0;
    //Taking the marks from the user
    for (int i = 0; i < Total_subjects; i++)
    {
        float Subject_marks;
        
        printf("Score for Subject %d out of 100 is ",i+1);
        scanf( "%f",&Subject_marks);
        //Cheking marks are valid or not
        if(Subject_marks<0 || Subject_marks>100)
        {
        start: printf("Re-enter value for subject bet 0 to 100 %d! : ",i);
               scanf("%f",&Subject_marks);
               if(Subject_marks<0 || Subject_marks>100)
              {goto start;}
        }
         Total += Subject_marks;

        
    }
    printf("\n your total marks scored are %f",Total);
    Percentage=Total/5;

    printf("\n Your Percentage scored is %.2f%%",Percentage); 
    
    if(Percentage>=75)
        {
        printf("\n Congratulation You have secured Distintion");
        }
    else if (Percentage>=60)
        {
        printf("\n Congratulation You have First class");
        }
    else if (Percentage>=50)
        {
        printf("\n You have secured Second Class");
        }
    else if (Percentage>=40)
        {
        printf("\n you have secured Third class");
        }
    else 
        {
        printf("\n Sorry You haved failed BETTER LUCK NEXT TIME");
        }

    return 0;
}