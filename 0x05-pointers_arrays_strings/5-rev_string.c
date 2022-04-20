#include "main.h"

/**
 *rev_string - to reverse a string i
 *@s: pointer to string
 */
void rev_string(char *s)
{
	int i;
	int a;
	
	i = 0;
	a =0;

	while (s[i] != '\0')
	{
		i++;
	}
	char tmpstr[i];

	i--;

	while (i >= 0)
	{
		tmpstr[a] = s[i];
		i--;
		a++;
	}
	*s = tmpstr;
}
