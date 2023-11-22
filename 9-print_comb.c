#include <stdio.h>

/**
 * description: a program that prints all possible combinations of single-digit numbers.
 * numbers must be printed in ascending order.
 * only putchar can be used.
 * return 0
 */
int main()
{
  int num;
  for(num = 48; num <= 57; num++)
  {
      putchar(num);
      putchar(',');
  }
  return 0;
}

