#include <stdio.h>

/**
 * description: Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 * putchar is the only stdio header function that can be used .
 */
int main()
{
  char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i = 0;
  while(i < 52)
  {
      i++;
      putchar(alpha[i]);
      putchar('\n');
  }

   return 0;
 }
