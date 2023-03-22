#include "main.h"
/**
* _atoi - check the code
*@dest:char * input pointer
* Return: int
*/
int _atoi(char *dest)
{
	int i, vs;
	char *temp;
	char sign;

	sign = '\0';
	vs = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		if(dest[i] == '-' || dest[i] == '+')
		{
			if(dest[i + 1] >= '0' && dest[i + 1] <= '9')
				sign = dest[i];
		}
		else if(dest[i] >= '0' && dest[i] <= '9')
		{	*(temp++) = (dest + i);
			vs = 1
		}
		else if( vs == 1 && !(dest[i] >= '0' && dest[i] <= '9') )
		{
		break;
		}
	}
	sz = sizeof(temp);
	if(vs == 1)
	{
		if(sign != '\0')
		{

		} else
		{

		}
	}
	return (ret);
}
