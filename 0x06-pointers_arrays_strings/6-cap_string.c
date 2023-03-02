/**
 * cap_string - a function that capitalizes all words of a string.
*Prototype: char *cap_string(char *);
*Separators of words: space, tabulation,
*new line, ,, ;, ., !, ?, ", (, ), {, and }
*@str: char * input strring
*
*Return: char *  CHAR POINTER
*/

char *cap_string(char *str)
{
	int i, j;
	char *sep = " \t\n ,, ;, ., !, ?, \", (, ), {, }";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	for (i = 1; str[i] != '\0'; i += 1)
	{
		for (j = 0; sep[j] != '\0'; j += 1)
		{
			if (str[i] == sep[j] &&  str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);
}
