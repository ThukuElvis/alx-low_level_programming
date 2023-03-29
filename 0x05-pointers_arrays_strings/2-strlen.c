#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s:-string to be checked
 * Return:The lenght of the the string
 */

int _strlen(char *s)
{
	int string_lenght = 0;

	while (s[string_lenght])
		string_length++;
	return (string_length);
}
