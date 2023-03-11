/**
 * _isalpha - Entry point
 * @c: int input
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	int ret;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		ret = 1;
	else
		ret = 0;
	return (ret);
}
