#include <stdio.h>

/**
 * description: A C program that prints alphabets in lowercase, followed by a new line
 * written by: Charlotte Wellington
 * return 0
 */
int main()
{
  int alpha = 'a';
  while(alpha <= 'z')
  {
     alpha++;
     putchar(alpha);
     putchar('\n');
  }
  return 0;
}
