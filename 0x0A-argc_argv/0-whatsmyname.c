#include <stdio.h>
#include "main.h"

/**
  * main - Print name of program
  * @argc: number of inputs
  * @argv: array of inputs
  * Return: 0 if true
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
