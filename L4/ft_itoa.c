// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdlib.h>

int	countdigit(int nbr)
{
	int i = 0;
	if (nbr <= 0)
		i = 1;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int len = countdigit(nbr);
	char *str = malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	unsigned int number = nbr;
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		number = (unsigned int)(-nbr);
	}
	else if (nbr == 0)
	{
		str[0] = '0';
	}
	while (number)
	{
		str[--len] = number % 10 + '0';
		number = number / 10;
	}
	return (str);
}

// #include <stdlib.h>

// static int	countdigt(int nbr)
// {
// 	int	i;

// 	i = 0;
// 	if (nbr == 0)
// 		return (1);
// 	while (nbr)
// 	{
// 		i++;
// 		nbr = nbr / 10;
// 	}
// 	return (i);
// }

// char	*ft_itoa(int nbr)
// {
// 	unsigned int	number;
// 	char			*str;
// 	int				len;

// 	len = countdigt(nbr);
// 	number = nbr;
// 	if (nbr < 0)
// 	{
// 		number = -1 * nbr;
// 		len++;
// 	}
// 	str = malloc(sizeof(char) * (len + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	str[len] = '\0';
// 	if (number == 0)
// 		str[--len] = '0';
// 	while (number)
// 	{
// 		str[--len] = number % 10 + '0';
// 		number = number / 10;
// 	}
// 	if (nbr < 0)
// 		str[0] = '-';
// 	return (str);
// }

#include<stdio.h>

int	main(void)
{
	int	n;

	n = -2124;
	printf("%s\n", ft_itoa(n));
}