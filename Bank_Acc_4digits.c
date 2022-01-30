//Harshit khnadelwal
/*Accept bank account number from user and identify the last four digits of the account number. Write a program to print the last four digits from the account number separately.
For example:- Input: 1000678954
Output:- 8   9   5   4*/
#include<stdio.h>
int main()
{long long int Acc_No,Acc;
  printf("Pls enter your Bank Account no.:");
  scanf("%lld",&Acc_No);
  start:if (Acc_No>10000000000 || Acc_No<999999999)
            {
               printf("pls enter a valid Bank Account no.:");
               scanf("%lld",&Acc_No);
               if (Acc_No>10000000000 || Acc_No<999999999)
                 {goto start;}        
            }
          Acc=Acc_No%10000;
          printf("The last four digit of your Bank Account No. is:%lld",Acc);
          
     return 0;}