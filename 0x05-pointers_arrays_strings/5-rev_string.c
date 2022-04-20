#include "main.h"

/**
 *rev_string - to reverse a string i
 *@s: pointer to string
 */
void rev_string(char *s)
{
	int i;
	char tmpstr;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (i >= 0)
	{
		tmpstr = tmpstr + s[i];
		i--;
	}
	*s = tmpstr;
}
