/**
 * _islower - Entry point
 * @c: int input
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int ret;

	if (c >= 'a' && c <= 'z')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
