/**
 * print_number - check the code.
 * @c: char input to _putchar
 * Return: product
 */
int _putchar(char c);

void print_number(int t)
{
	int p0, p1, p2, p3, p4, p5, p6, p7, p8;
	int q0, q1, q2, q3, q4, q5, q6, q7;

	if (t < 0)
	{
		t = -t;
		_putchar('-');
	}

	p0 = t % 10;
	q0 = t / 10;

	p1 = q0 % 10;
	q1 = q0 / 10;

	p2 = q1 % 10;
	q2 = q1 / 10;

	p2 = q1 % 10;
	q2 = q1 / 10;

	p3 = q2 % 10;
	q3 = q2 / 10;

	p4 = q3 % 10;
	q4 = q3 / 10;

	p5 = q4 % 10;
	q5 = q4 / 10;

	p6 = q5 % 10;
	q6 = q5 / 10;

	p7 = q6 % 10;
	q7 = q6 / 10;

	p8 = q7 % 10;


	if (t >= 0 && t < 10)
	{
		_putchar (t + '0');
	}
	if (t >= 10 && t < 100)
	{
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 100 && t < 1000)
	{
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 1000 && t < 10000)
	{
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 10000 && t < 100000)
	{
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 100000 && t < 1000000)
	{
		_putchar (p4 + '0');
		_putchar (p3 + '0');
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 1000000 && t < 10000000)
	{
		_putchar (p5 + '0');
		_putchar (p4 + '0');
		_putchar (p3 + '0');
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 10000000 && t < 100000000)
	{
		_putchar (p6 + '0');
		_putchar (p5 + '0');
		_putchar (p4 + '0');
		_putchar (p3 + '0');
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 10000000 && t < 100000000)
	{
		_putchar (p7 + '0');
		_putchar (p6 + '0');
		_putchar (p5 + '0');
		_putchar (p4 + '0');
		_putchar (p3 + '0');
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	} else if (t >= 100000000 && t < 1000000000)
	{
		_putchar (p8 + '0');
		_putchar (p7 + '0');
		_putchar (p6 + '0');
		_putchar (p5 + '0');
		_putchar (p4 + '0');
		_putchar (p3 + '0');
		_putchar (p3 + '0');
		_putchar (p2 + '0');
		_putchar (p1 + '0');
		_putchar (p0 + '0');
	}
}
