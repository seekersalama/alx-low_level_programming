/**
 * print_name - check the code
 *@name: char *
 *@f: void
 * Return: Nothing
 */


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
