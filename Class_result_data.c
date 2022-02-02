// Harshit khnadelwal
/*A class teacher wants to keep record of students in the class along with the names and marks obtained in 5 subjects. Write a C program with function that displays
a) Name of the student with highest marks in a particular subject.
b) Overall percentage result of the class
c) Total number of passing students in the class,
d) Total number of students failing in one subject
e) Total number of distinctions in the class.
*/

#include <stdio.h>
// function for max marks
int findmax(int arr[],int a)
{
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}
// function for checking pass or fail
int findpass(int arr[],int a)
{
    int pass = 0;
    for (int i = 0; i < a; i++)
    {
        if (pass < arr[i])
            pass = arr[i];
    }
    return pass;
}
// function for grades
int finddistinction(int arr[],int a)
{
    int distn = 0;

    for (int i = 0; i < a; i++)
    {
        if (arr[i] >= 75)
            distn += 1;
    }
    return distn;
}

int main()
{
    int a;
    int rollno[100];
    char name[10][10];
    int cpps[100];
    int phy[100];
    int maths[100];
    int bee[100];
    int chem[100];
    int perc[100];
    int sum, overall = 0;

    printf("Enter the no. of students:.");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("Enter Roll no of student:");
        scanf("%d", &rollno[i]);
        printf("\nEnter students name:");
        scanf("%s", name[i]);
        printf("\nEnter marks of cpps:");
        scanf("%d", &cpps[i]);
        printf("\nEnter marks of physics:");
        scanf("%d", &phy[i]);
        printf("\nEnter marks of maths:");
        scanf("%d", &maths[i]);
        printf("\nEnter marks of bee:");
        scanf("%d", &bee[i]);
        printf("\nEnter marks of chem:");
        scanf("%d", &chem[i]);
    }

    for (int i = 0; i < a; i++)
    {
        perc[i] = (cpps[i] + phy[i] + maths[i] + bee[i] + chem[i]) / 5;
    }
    printf("\n\n Students data");
    printf("\nRollno  name\tcpps\tphy\tmaths\tbee\tchem\tpercentage");
    printf("\n-------------------------------------------------------------");
    for (int i = 0; i < a; i++)
    {
        printf("\n| %d |\t %s  | \t%d  | \t%d  |\t%d  | \t%d   | \t%d   | \t%d |", rollno[i], name[i], cpps[i], phy[i], maths[i], bee[i], chem[i], perc[i]);
    }
    printf("\n-------------------------------------------------------------");
    // printing of maximum marks
    printf("\n maximum scored in  cpps: %d", findmax(cpps,a));
    printf("\n maximum scored in maths: %d", findmax(maths,a));
    printf("\n maximum scored in bee: %d", findmax(bee,a));
    printf("\n maximum scored in chem: %d", findmax(chem,a));
    printf("\n maximum scored in phy: %d", findmax(phy,a));

    // calculation of overall percentage
    for (int i = 0; i < a; i++)
    {

        overall = overall + perc[i];
    }
    printf("\n overall percentage of the class is %d", overall / a);

    int pass = 0;
    for (int i = 0; i < a; i++)
    {
        if (cpps[i] > 35 && phy[i] > 35 && maths[i] > 35 && bee[i] > 35 && chem[i] > 35)
        {

            pass = pass + 1;
        }
    }
    printf("\n No. of students passed:%d", pass);

    printf("\nNo of students failed:%d", a - pass);

    printf("\nNo. of students who got distinction: %d", finddistinction(perc,a));
}
