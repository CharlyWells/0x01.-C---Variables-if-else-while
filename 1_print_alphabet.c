#include <stdio.h>

/**
 * description:a program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * return 0
 */
int main()
{
 char alpha[26]= "abcdfghijklmnoprstuvwxyz";
 int i = 0;
 while(i < 26)
 {
   i++;
   putchar(alpha[i]);
   putchar('\n');
   }
    return 0;
  }
