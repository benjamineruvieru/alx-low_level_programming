#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
  {
    if (ch == 'q' | ch == 'e')
    {
    } else {
		putchar(ch);
    }
  }
	putchar('\n');
	return (0);
}
