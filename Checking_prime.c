
//Harshit khnadelwal
/*Write a program to check whether given number is Prime or not. Take a number as input from user. */
#include<stdio.h>
int main()
{ int i,x=0,a;

  printf("Enter an no.:");
  scanf("%d",&a);
 if (a>0)
 {for(i=1;i<=a-1;i++)
	{
		if( a%i==0)
		{x=x+1;}
	}
  if (x==1)
	  printf("It is a prime number");  
  else
	  printf("Not a prime number");}
else
  printf("Illegal input");
 
 return 0;
}