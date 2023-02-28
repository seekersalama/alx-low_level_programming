/**
 * _strlen - check the code
 *@s: char * input pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	do {
		length++;
	} while (s[length] != '\0');
	return (length);
}
