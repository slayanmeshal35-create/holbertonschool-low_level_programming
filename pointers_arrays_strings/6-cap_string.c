
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int start = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (start && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		start = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				start = 1;
				break;
			}
		}
		i++;
	}

	return (str);
}

