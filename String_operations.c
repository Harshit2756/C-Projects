//Harshit khnadelwal
/*Perform following string operations on arrays(without using library functions and using pointers). 
A)substring 
B)Palindrome 
C) compare 
D)copy 
E)reverse.*/

#include<stdio.h>

void swap(char * a, char * b);

void string_reverse(char * a);
int string_lenght(char str[]);
void str_copy(char * a, char * b, int len);
int str_comp(char * a, char * b, int len);
int main() {
    char str[100], str1[100];
    int n;
    printf("Enter 1 for String Subset!!! \n");
    printf("Enter 2 for String Pallindrome Checking!!! \n");
    printf("Enter 3 for String Compare!!! \n");
    printf("Enter 4 for String Copy!!! \n");
    printf("Enter 5 for String Reverse!!! \n");
    printf("Enter your Choice:   ");
    scanf("%d", & n);
    switch (n) {
        case 1: //subset of string
            printf("Enter A String : \n");
            scanf("%s", str);

            printf("Enter Positions Of Char of String in Between you Want Substring :    \n");
            int start, end;
            printf("Enter Starting Point :  ");
            scanf("%d", & start);
            printf("Enter Ending Point :  ");
            scanf("%d", & end);

            printf("Substring You want: \n");
            for (int i = start; i <= end; i++) {
                printf("%c", *(str + i));
            }
            break;

        case 2: //pallindrome
            printf("Enter A String : \n");
            scanf("%s", str);
            str_copy(str, str1, string_lenght(str));
            string_reverse(str);
            int pal = str_comp(str, str1, string_lenght(str));

            if (pal == string_lenght(str)) {
                printf("String Is Pallindrome\n");
            } else {
                printf("String Is Not Pallindrome\n");
            }
            break;

        case 3: //string compare
            printf("Enter 1st String :  ");
            scanf("%s", str);
            printf("Enter 2nd String :  ");
            scanf("%s", str1);
            if (string_lenght(str) == string_lenght(str1)) {
                int a = str_comp(str, str1, string_lenght(str));
                if (a == string_lenght(str)) {
                    printf("Strings Are Equal\n");
                } else {
                    printf("Strings Are Not Equal\n");
                }
            } else {
                printf("Strings Are not Equal \n");
            }
            break;

        case 4: //string copy
            printf("Enter A String : \n");
            scanf("%s", str);
            int len = string_lenght(str);
            printf("1.Originally Entered String :   %s\n", str);
            printf("1. Copied String Into String1 :  \n");
            str_copy(str, str1, len);
            string_reverse(str);
            printf("%s\n", str1);
            break;

        case 5: //string reverse 
            printf("Enter A String : \n");
            scanf("%s", str);
            printf("2. String After Reversing : \n");

            string_reverse(str);

            printf("%s\n", str);
            break;

        default:
            return 0;


    }

    return 0;

}

void swap(char * a, char * b) {
    char temp;
    temp = * a;
    * a = * b;
    * b = temp;

}

int string_lenght(char str[]) {
    int len = 0;
    char a = '\0';
    for (int i = 0; str[i] != a; i++) {
        len++;

    }
    return len;
}

void str_copy(char * a, char * b, int len) {
    while ( * a) {
        * b = * a;
        b++;
        a++;
    }
    * b = '\0';
}

int str_comp(char * a, char * b, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if ( * (b + i) == * (a + i)) {
            count++;
        }
    }
    return count;

}

void string_reverse(char * a) {


    if (string_lenght(a) % 2 == 0) {
        for (int i = 0; i < string_lenght(a) / 2; i++) {
            if (string_lenght(a) % 2 == 0) {
                int j = string_lenght(a) - i - 1;
                swap( & a[i], & a[j]);
            }
        }
    } else {
        for (int i = 0; i < string_lenght(a) / 2; i++) {
            for (int j = string_lenght(a); j >= 0; j--) {

                if (i + j == string_lenght(a) - 1) {
                    swap( & a[i], & a[j]);
                }
            }

        }

    }
}