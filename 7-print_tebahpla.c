#include <stdio.h>

/**
 * description:  a program that prints the lowercase alphabet in reverse, followed by a new line.
 * You can only use the putchar function
 * return 0
 */
int main()
{
  int alph;
  for(alph = 97; alph <= 122; alph++)
	{
          putchar(alph);
	  putchar('\n');
	}
  return 0;
}
