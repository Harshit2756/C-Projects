//Harshit khnadelwal
/*Write a program to swap values of two elements.
Use function and pass argument using call by reference.*/

#include <stdio.h>
#include <string.h>
void swap ( int *a, int *b )
{
   int temp ;
   temp = *a ;
   *a = *b ;
   *b = temp ;
}
int main( )
{
   int a = 10, b = 20 ;
   printf("Before swapping the numbers are:");
   printf("\nnum1 value is %d", a);
   printf("\nnum2 value is %d", b);

   swap( &a, &b );

   printf("\nAfter swapping the numbers are:");
   printf("\nnum1 value is %d",a);
   printf("\nnum2 value is %d", b);
   return 0;
}
