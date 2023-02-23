#include  "main.h"

/**
 * main - check the code.
 * @c1 : char input to puchar
 * @c2 : int input to puchar
 * Return: Always 0.
 */

int _islower(int c2);
int _putchar(char c1);

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
