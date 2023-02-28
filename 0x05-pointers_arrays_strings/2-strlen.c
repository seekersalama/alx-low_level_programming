/**
 * _strlen - check the code
 *@s: char * input pointer
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
