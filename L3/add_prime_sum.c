// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

int	is_prime(int n)
{
	if (n <= 1)
		return (0);
	int i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	int	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res);
}

void	put_nbr(int n)
{
	if (n >= 10)
	{
		put_nbr(n / 10);
	}
	char digit = n % 10 + '0';
	write(1, &digit, 1);
		// write(1, &(int){ '0' + n % 10}, 1);
}


int add_prime_sum(int n)
{
	int sum = 0;
	int i = 2;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int i;
	if(ac == 2 && (i = add_prime_sum(ft_atoi(av[1]))))
		put_nbr(i);
	else
		put_nbr(0);
	write(1, "\n", 1);
}
