#include <stdio.h>

/**
 * a program that prints all the numbers of base 16 in lowercase, followed by a new line
 * only putchar can be used.
 * return 0
8-print_base16.c */
int main()
{
  int num1;
  for(num1 = 48; num1 <=57; num1++)
    {
       putchar(num1);
     }
  for(num1 = 97; num1 <=122; num1++)
    {
       putchar(num1);
    }
       putchar('\n');
       return 0;
  }
