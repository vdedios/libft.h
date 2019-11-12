#include "libft.h"

/*
convert a char to int with the following format: 
isspace(as many as you want) + one sign + numbers
anything else it returns a 0
*/
int	ft_atoi(const char *nptr)
{
	int num;
	int sign;

	sign = 0;
	num = 0;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v' 
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
			nptr++;
	if (*nptr == '-' ||*nptr == '+')
	{
		if (*nptr == '-')
			sign = 1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	if (sign == 1)
		return -num;
	return num;
}
