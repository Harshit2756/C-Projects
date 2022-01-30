//Harshit khnadelwal
/*Write a program that uses functions to perform the following operations:
a) Reading a complex number
b) Writing a complex number
c) Addition of two complex numbers
d) Multiplication of two complex numbers.
*/

#include <stdio.h>

struct complex
{
   float real, imag;
}a, b, c;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex sub(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);
   struct complex div(struct complex, struct complex);
int main ()
{
   int choice;
   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);
   printf("Enter  the 2nd complex number\n");
   b = read();
   write(b);
   
   do
   {
     printf("\n1.Addition");
     printf("\n2.Subtraction");
     printf("\n3.Multiplication");
     printf("\n4.Division");
     printf("\n5.Exit");
     printf("\nEnter your choice:");
     scanf("%d", &choice);
     if(choice==5)
    {
     printf("\nYou have chosen to exit the program. Thank you\n");
     break;
    }
     switch(choice)
     {
       case 1:
       printf("Addition\n ");
       c = add(a, b);
       write(c);
       break;
       case 2:
       printf("Subtraction\n ");
       c = sub(a, b);
       write(c);
       break;
       case 3:
       printf("Multiplication\n");
       c = mul(a, b);
       write(c);
       break;
       case 4:
       printf("Division\n");
       c = div(a, b);
       write(c);
       break;
       default:
       printf("\nInvalid choice\n");  
     }
   }while(choice<6);
      
  return 0;
}
struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.real);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}
void write(struct complex a)
{
   printf("Complex number  is\n");
   printf(" %.1f + i %.1f", a.real, a.imag);
   printf("\n");
}
struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}
struct complex sub(struct complex p, struct complex q)
{
   struct complex t;
   t.real = (p.real - q.real);
   t.imag = (p.imag - q.imag);
   return t;
}
struct complex mul(struct complex p, struct complex q)
{
   struct complex t;
   t.real=(p.real * q.real) - (p.imag * q.imag);
   t.imag=(p.real * q.imag) + (p.imag * q.real);
   return t;
}
struct complex div(struct complex p, struct complex q)
{
   struct complex t;
   t.real = ((p.imag * q.real) - (p.real * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   t.imag = ((p.real * q.real) + (p.imag * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   return(t);
}
