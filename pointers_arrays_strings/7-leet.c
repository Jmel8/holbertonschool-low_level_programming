#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @i: string to upper
 * Return: a string
 */
char *leet(char *i)
{
	int j = 0;
	int k;
	int l = 5;
	char x[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet[5] = {'4', '3', '0', '7', '1'};

	while (i[j])
	{
		k = 0;
		while (k < l)
		{
			if (i[j] == x[k] || i[j] - 32 == x[k])
			{
				i[j] = leet[k];
			}
		k++;
		}
	j++;
	}
	return (i);
}
