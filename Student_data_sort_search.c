//Harshit khnadelwal
/*Write a program to store student information (e.g. Roll No, Name, Percentage etc.).
a) Display the data in descending order of Percentage (bubble sort).
b) Display data for roll no specified by user (linear search).
*/

#include <stdio.h>typedef struct student 
    {
    float percentage;
    char name[20];
    int rollno;
    }

stu;

int main() {
    int n;
    printf("\n==========================================\n");
    printf("Enter No Of Students: ");
    scanf("%d", &n);
    printf("\n==========================================\n");
    struct student student_data[20];

    //(A):SORTING DATA:
    //GETTING DATA FROM USER
    for (int i=0; i < n; i++) {
        printf("Enter Students Name: ");
        scanf("%s", student_data[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &student_data[i].rollno);
        printf("Enter Percentage: ");
        scanf("%f", &student_data[i].percentage);
        printf("\n==========================================\n");
    }

    //SORTING
    struct student temp;

    for (int i=0; i < n - 1; i++) {
        for (int j=0; j < (n - 1 - i); j++) {
            if (student_data[j].percentage < student_data[j + 1].percentage) {
                temp=student_data[j];
                student_data[j]=student_data[j+1];
                student_data[j+1]=temp;
            }
        }
    }

    Program :- //Displaying Data:
    printf("\n=====================RANK LIST================\n");
    printf("\t\tROLLNO\t\tNAME \t\tPER.\n");

    for (int i=0; i < n; i++) {
        printf("\t\t%d\t\t\t%s\t\t\t%.2f\n", student_data[i].rollno, student_data[i].name, student_data[i].percentage);
    }

    //(B):SEARCHING USER USING ROLLNO (USING LINEAR SEARCH):
    int choice_roll,
    j;
    printf("\n==========================================\n");
    printf("ENTER ROLL NO DO YOU WANT TO SEARCH: ");
    scanf("%d", &choice_roll);

    for (int i=0; i < n; i++) {
        if (choice_roll==student_data[i].rollno) {
            j=i;
            break;
        }
    }

    printf("\n==========================================\n");
    printf("STUDENT DATA IS:\n");
    printf("Student NAme: %s\n", student_data[j].name);
    printf("ROLL NO: %d\n", student_data[j].rollno);
    printf("PERCENTAGE: %.2f", student_data[j].percentage);
    printf("\n==========================================\n");
    return 0;
}