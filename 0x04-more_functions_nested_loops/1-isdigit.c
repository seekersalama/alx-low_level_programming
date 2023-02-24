/**
 * _isdigit - check the code.
 * @c: int input variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int ret;

	if (c >= '0' && c <= '9')
		ret = 1;
	else
		ret = 0;
	return (ret);
}
