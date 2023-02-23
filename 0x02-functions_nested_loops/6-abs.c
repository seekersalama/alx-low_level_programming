/**
 * _abs  - Entry point
 * @n: int input
 * Return: Always 0 (Success)
 */


int _abs(int n)
{
	int ret;

	if (n >= 0)
	{
		ret = n;
	}
	else
	{
		ret = -n;
	}
	return (ret);
}
