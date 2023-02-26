/**
 * _isupper - check the code.
 *@c : int input argument
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	int ret;

	if (c >= 'A' && c <= 'Z')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
