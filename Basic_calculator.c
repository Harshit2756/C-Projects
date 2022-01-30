//Harshit khnadelwal
/*To simulate a simple calculator that performs basic tasks such as addition, subtraction,multiplication, and division..*/

#include<stdio.h>
#include<math.h>
int main()
{
 char choice;
 int x,y,Ans,i,fact=1,exp=1;

  start:printf("  x= [+ - * / ! ^] y= ");
  scanf("%i %c %i",&x,&choice,&y);
    
  switch (choice)
    {
      case'+':
       printf("%i+%i=%i\n",x,y,x+y);
       goto start;
      break;      
      
      case'-':
       printf("%i-%i=%i\n",x,y,x-y);
       goto start;
      break;
      
      case'*':
       printf("%i*%i=%i\n",x,y,x*y);
       goto start;
      break;
      
      case'/':
       if (y==0)
        {printf("Error");
         goto start;}
       else
        {printf("%i/%i=%i\n",x,y,x/y);}
      break;
      
      case'!':
       for (i= 1; i<=x; ++i)
         {
          fact=fact*i;}
          printf("%i!=%i\n",x,fact);
          goto start;
      break;
      
      case'^':
       Ans=pow(x,y);
       printf("%i^%i=%i\n",x,y,Ans);
       goto start;
       
         /*if you don't include math.h file follow this 
         for ( i = 1; i<=y; i++)
         {Ans =Ans*x;}
         printf("%i^%i=%i",x,y,Ans);*/
         
      break;
      
      default:
       printf("This calculator does not suport this operation sorry");
       goto start;
      break;
    }
    return 0;
}
