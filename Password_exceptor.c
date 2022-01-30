
// Harshit khnadelwal
/*Consider you have created a website in which you are accepting details of users where you have to take password from user. Write a program to accept password from user with following condition:
1. Minimum characters 6 and maximum are 12.
2. Atleast one digit and one characters.
3. Atleast one special symbol  (@, $,#) .*/
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  int len;
EnterPassword:
  printf("Enter Password: \n ");
  scanf("%s", str);
  len = strlen(str);
  if (len < 6 || 12 < len)
  {
    printf("\nERROR: Password must be 6 to 12 char long!!! Please Try Again\n\n");
    goto EnterPassword;
  }
  int digitCheck = 0;
  int specialCharCheck = 0;
  int charCheck = 0;
  for (int i = 0; i < len; ++i)
  {
    int code = (int)str[i];
    if (code == 64 || code == 36 || code == 35)
    {
      // '@': 64, '$': 36, '#': 35
      specialCharCheck = 1;
    }
    // 0 to 9
    if (48 <= code && code <= 57)
    {
      digitCheck = 1;
    }
    // A to Z                           a to z
    if ((65 <= code && code <= 90) || (97 <= code && code <= 122))
    {
      charCheck = 1;
    }
  }
  if (digitCheck && specialCharCheck && charCheck)
  {
    printf("\nSUCCESS: Password Accepted!!\n");
  }
  else
  {
    printf("\nERROR:\n");
    if (digitCheck == 0)
    {
      printf("\t- Password must have atleast one number\n");
    }
    if (specialCharCheck == 0)
    {
      printf("\t- Password must have atleast one special symbol (@, $,#)\n");
    }
    if (charCheck == 0)
    {
      printf("\t- Password must have atleast one Character (A-Z, a-z)\n");
    }
    printf("\nPlease Try Again\n\n");
    goto EnterPassword;
  }
  return 0;
}