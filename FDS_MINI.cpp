#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct patient
{
    long long ID;
    string firstname;
    string lastname;
    int age;
    char blood[5];
    char gender;
    char problem[50];
    patient *next;
};
class linkedqueue
{
    patient *head, *last;

public:
    linkedqueue() 
    {
        head = NULL;
        last = NULL;
    }
    patient input();
    void insertatend();
    void insertatbeg();
    void getpatientout();
    void listofpatients();
    int search(int);
    char departmentname[50];
};

int linkedqueue ::search(int item)
{
    if (head == NULL)
        return false;
    else
    {
        int flag = 0;
        patient *p = new patient();
        p = head;

        while (p->next != NULL && p->ID != item)
        {
            p = p->next;
        }
        if (p->ID == item)
        {
            flag = 1;
            return true;
        }
        if (flag == 0)
            return false;
    }
}

int readnumber()
{
    char b[20];
    cin.getline(b,1);
    return atoi(b);
}

patient linkedqueue ::input()
{
    int flag = 0;
    patient *p = new patient();
    cout << "\n\tPlease enter data for patient\n";
    cout << "\n\tFirst name     : ";
    cin>>p->firstname;
    
    cout << "\tLast name      : ";
    cin>>p->lastname;
   
again:
    cout << "\tBlood Group    : ";
    cin >> p->blood;
    if ((strcmp(p->blood, "A+") == 0) || (strcmp(p->blood, "a+") == 0) || (strcmp(p->blood, "A-") == 0) || (strcmp(p->blood, "a-") == 0) ||
        (strcmp(p->blood, "B+") == 0) || (strcmp(p->blood, "b+") == 0) || (strcmp(p->blood, "B-") == 0) || (strcmp(p->blood, "b-") == 0) ||
        (strcmp(p->blood, "O+") == 0) || (strcmp(p->blood, "o+") == 0) || (strcmp(p->blood, "O-") == 0) || (strcmp(p->blood, "o-") == 0) ||
        (strcmp(p->blood, "AB+") == 0) || (strcmp(p->blood, "ab+") == 0) || (strcmp(p->blood, "AB-") == 0) || (strcmp(p->blood, "ab-") == 0))
        flag = 1;
    if (flag == 0)
    {
        cout << "\nWrong Entry...Enter a valid Blood Group..Try Again..";
        goto again;
    }
    cout << "\tGender           : (m/f)";
    cin >> p->gender;
    cout << "\tAge              : ";
    cin >> p->age;
    cout << "\tMobile number    : ";
    cin >> p->ID;
    cout<<"\tProblem               :";
    cin >> p->problem;

    if (search(p->ID))
    {
        p->ID = 0;
        cout << "\n\tData not valid. Operation cancelled.";
    }
    return *p;
}

void output(patient *p)
{
    cout << "\n****";
    cout << "\n\nPatient data:";
    cout << "\n\nFirst Name       : " << p->firstname<<endl;
    cout << "\nLast Name          : " << p->lastname<<endl;
    cout << "\nGender             : " << p->gender<<endl;
    cout << "\nAge                : " << p->age<<endl;
    cout << "\nBlood Group        : " << p->blood<<endl;
    cout << "\nMobile Number      : " << p->ID <<endl;
    cout << "\nProblem            : " << p->problem<<endl;
    cout << "\n\n****";
}
void linkedqueue ::insertatbeg()
{
    patient *p = new patient();
    *p = input();
    if (p->ID == 0)
        return;

    if (head == NULL)

    {
        head = p;
        last = p;
        p->next = NULL;
    }
    else
    {
        p->next = head;
        head = p;
    }
    
    cout << "\n\tPatient added:";
    output(p);
}
void linkedqueue::insertatend()
{
    patient *p = new patient();
    *p = input();
    if (p->ID == 0)
        return;

    if (head == NULL)
    {
        head = p;
        last = p;
        p->next = NULL;
    }
    else
    {
        p->next = NULL;
        last->next = p;
        last = p;
    }
   
    cout << "\n\tPatient added:";
    output(p);
}
void linkedqueue ::getpatientout()
{
   
    if (head == NULL)
    {
        cout << "\n\tNo Patient to operate";
    }
    else
    {
        patient *p = new patient();
        p = head;
        head = head->next;
        cout << "\n\tPatient to operate:";
        output(p);
    }
}

void linkedqueue ::listofpatients()
{
    if (head == NULL)
    {
        cout << "\n\tNo patient";
    }
    patient *p = new patient;
    p = head;
    while (p != NULL)
    {
        cout << "\nPatient data:";
        cout << "\nFirst Name       : " << p->firstname<<endl;
        cout << "\nLast Name        : " << p->lastname<<endl;
        cout << "\nGender           : " << p->gender<<endl;
        cout << "\nAge              : " << p->age<<endl;
        cout << "\nBlood Group      : " << p->blood<<endl;
        cout << "\nMobile Number    : " << p->ID<<endl;
        cout << "\n****\n";
        p = p->next;
    }
    cout << "\n";
}

void departmentmenu(linkedqueue *q)
{
    int choice = 0, success;
    patient p;
    while (choice != 5)
    {
        
        cout << "\n\n\tWelcome To Department : " << q->departmentname;
        cout << "\n\t\t[1] Add normal patient\n";
        cout << "\t\t[2] Add critically ill patient\n";
        cout << "\t\t[3] Take patient to Doctor\n";
        cout << "\t\t[4] Display list\n";
        cout << "\t\t[5] Change department or exit\n";
        cout << "\n\tPlease enter your choice : ";
       cin>>choice;

        switch (choice)
        {
        case 1:
            q->insertatend();
            cout << "\n\tPress any key";
            
            break;

        case 2:
            q->insertatbeg();
            cout << "\n\tPress any key";
            
            break;

        case 3:
            q->getpatientout();
            cout << "\n\tPress any key";
            
            break;

        case 4:
            system("cls");
            q->listofpatients();
            cout << "\n\tPress any key";
            
            break;
            
        case 5:
            
             break;
        }
    }
}

int main()
{
  cout << "\n\t\t\t\t\t*********** WELCOME **************\n";
  cout << "\n\t\t\t\t\t**********************************\n";
  cout << "\n\t\t\t\t\t\tHOSPITAL MANAGEMENT SYSTEM\t\n";
  cout << "\n\t\t\t\t\t**********************************\n\n";
  string username;
string password;
cout<<"\n\t** Please Provide Your Username and Password To Login into the system **\n\n";
cout<<"\n\t\t\t\t\t\t\t\tUsername:";
cin>>username;
cout<<"\n\t\t\t\t\t\t\t\tPassword:";
cin>>password;
if(username=="Apollo")
{
  if(password=="1234")
  {
    cout<<"\n Congratulations you are logged in:"<<"\n\n";
    int i, choice = 0;
    linkedqueue departments[4];
{
 cout << "\n\t\t\t\t--- WELCOME TO APOLLO HOSPITAL ---\n";
 cout<<"\n\n\t\t\t ------------------------------------------";
 cout<<"\n\n\t\t\t\t\t\t APOLLO HOSPITAL";
 cout<<"\n\n\t\t\t-----------------------------------------------\n";
 cout<<"\n\n\t\t\tWelcome To the Departments\n";
 cout<<"\t\t\tThere are 4 departments\n\n";
}

    while (choice != 5)
    {
        strcpy(departments[0].departmentname, "General Clinic\n");
        strcpy(departments[1].departmentname, "Heart Clinic\n");
        strcpy(departments[2].departmentname, "Lung Clinic\n");
        strcpy(departments[3].departmentname, "Plastic Surgery\n");
        for (i = 0; i < 4; i++)
        {
            cout << "\t" << (i + 1) << ": " << departments[i].departmentname;
        }
        cout << "\t5: Exit";
        cout << "\n\n\tPlease enter your choice :\n ";

       cin>>choice;
        if (choice >= 1 && choice <= 4)
        {
            departmentmenu(&departments[choice - 1]);
        }
    }
    if (choice == 5)
    {
      cout << "\n\t\tThank you! \n";
exit(0);
    }
  
  }
  else
  {
    cout<<"Invalid Password:"<<"\n";
  }
}
else
{
  cout<<"Ivalid Username"<<"\n";
}
}