// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <limits.h>

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	while ((*str == 32) || ((*str >= 9 && *str <= 13)))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		if ((result > LONG_MAX / 10) || (result == LONG_MAX / 10
				&& (*str - '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		result = result * 10 + (*str++ - '0');
	}
	return (sign * result);
}