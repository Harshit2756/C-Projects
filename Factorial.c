//Harshit khnadelwal
/*Write a program to compute the factorial of the given positive integer using function*/

#include <stdio.h>
#include<string.h>
#define SIZE 50
struct customer
{
  int account_no;
  char name[50];
  int balance;
  int e_banking;
  int pincode;
  int account_type;
}c;
void display(struct customer c[],int n)
{
   int i;

    printf("\n\nA/c No\tName\tBalance\t\te_banking\tpincode\taccount_type\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\n", c[i].account_no, c[i].name, c[i].balance, c[i].e_banking,c[i].pincode, c[i].account_type);
    } 
}
void e_banking(struct customer c[],int n)
{
  int i;
  printf("\nCustomer details who can avail internet banking facility:");
  for(i=0;i<n;i++)
  {
    if(c[i].e_banking == 1)
    {
      printf("\nAccount holder name:%s",c[i].name);
    }
  }
}
void pincode(struct customer c[],int n)
{
  int i;
  printf("\n\nCustomer details who belong to a particular geographical location:");
  printf("\nEnter preferred pincode");
  scanf("\n%d",&c[i].pincode);
  for(i=0;i<n;i++)
  {
    if(c[i].pincode == 422001)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422002)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422003)
    {
      printf("\nAccount holder name:%s",c[i].name);
       
    }
    else if(c[i].pincode == 422003)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422004)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422005)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422006)
    {
      printf("\nAccount holder name:%s",c[i].name);
    
    }
    else if(c[i].pincode == 422007)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422008)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422009)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422010)
    {
      printf("\nAccount holder name:%s",c[i].name);
     
    }
    else if(c[i].pincode == 422011)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else if(c[i].pincode == 422012)
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
    else
    {
      printf("\nAccount holder name:%s",c[i].name);
      
    }
  }
}
void account_type(struct customer c[],int n)
{
  int i;
  printf("\n\nCustomer details as per their account type:");
  printf("\nEnter preferred account type:1]Saving, 2]Recurring, 3]Deposit");
  scanf("%d",&c[i].account_type);
  for(i=0;i<n;i++)
  {
    if(c[i].account_type == 1)
    {
      printf("\nAccount holder name:%s",c[i].name);
    
    }
    else if(c[i].account_type == 2)
    {
      printf("\nAccount holder name:%s",c[i].name);
       
    }
    else
    
    {
      printf("\nAccount holder name:%s",c[i].name);
 
    }

  }
}

int main()
{
  struct customer c[SIZE];
  int num,i,balance;
  printf("Enter number of customers: ");
  scanf("%d",&num);
  printf("\n");

  for(i=0;i<num;i++)
  {
    printf("\t=:Customer %d Detail:=\n",i+1);
   
    printf("\nEnter account number:");
    scanf("%d",&c[i].account_no);
   
    printf("\nEnter name of account holder:");
    scanf("%s",c[i].name);

    printf("\nEnter balance:");
    scanf("%d",&c[i].balance);
     if(c[i].balance> 1000000)
      {
        printf("Golden customer");
      }
      else if(c[i].balance <500000)
      {
        printf("General customer");
      }
      else
      {
        printf("Silver customer");
      }
   

   
    printf("\n\nEnter if internet banking facitity is availed(Yes=1, No=0:)\n");
    scanf("%d",&c[i].e_banking);
    
    printf("\nEnter pincode(422001-422013):\n");
    scanf("%d",&c[i].pincode);
    
   
    
    printf("\nEnter account type (1]saving,2]recurring,3]deposit):\n");
    scanf("%d",&c[i].account_type);
    printf("\n");
  }
  display(c,i);
  e_banking(c,i);
  pincode(c,i);
  account_type(c,i);
}
