//Harshit khnadelwal
/*Write a program to accept n number of element from user (where, n is specified by user) and stores data in an array and display the largest element of that array using loops*/
#include<stdio.h>
int main ()
{
int n,i,Largest;
int arr[100000];
printf("Pls enter no. of elements:");
scanf("%d",&n);

for ( i = 0; i < n; i++)
{
   printf("Enter the element value %d: ",i+1);
   scanf("%d",&arr[i]);
}
Largest =arr[0];
for ( i = 1; i < n ; i++)
{
    if (Largest<arr[i])
    {
        Largest =arr[i];
    }
}
printf("Largest element among the arrays is %d",Largest);
 
return 0;}
