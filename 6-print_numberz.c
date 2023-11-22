#include <stdio.h>

/**
 * description: a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 * Putchar can be used only twice.
 */
int main()
{
  int num;
  for(num = 48; num < 58; num++){
    putchar(num);
  } 
  return 0;
}
