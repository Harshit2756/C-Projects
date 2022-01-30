//Harshit khnadelwal
/*Write a program to find the largest number using ternary operator among : two numbers,three numbers, four numbers.*/

#include <stdio.h>
int main()
{
  float a,b,c,d,max;
  int num_count;
  start:printf("How Many Numbers will you enter (2/3/4): ");
  scanf("%d", &num_count);

  // to get variable number of input from user without using loops
  switch (num_count)
  {
  case 2:
      printf("Enter 2 Positive Integers (Space Seperated): ");
      scanf("%f %f", &a, &b);
       max = a > b ? a : b;
      break;
  case 3:
      printf("Enter 3 Positive Integers (Space Seperated): ");
      scanf("%f %f %f", &a, &b, &c);
       max = a > b ? ((a>c) ? a : c) : ((b>c) ? b : c);
      break;
  case 4:
      printf("Enter 4 Positive Integers (Space Seperated): ");
      scanf("%f %f %f %f", &a, &b, &c, &d);
       max = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d));
      break;
  default:
      printf("Invalid Input\n");
      goto start;
      break;
      }
    printf("Maximum of all the entered number is: %f", max);
    return 0;
}