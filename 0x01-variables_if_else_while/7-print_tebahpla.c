#include <stdio.h>

/**
 * main - prints  lowercase alphabet in reverse,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
  char ch;
  for (ch = 'z'; ch > 'a'; ch--)
  {
    putchar(ch);
  }
  putchar('\n');
  return (0);
}
