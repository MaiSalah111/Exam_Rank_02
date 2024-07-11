// Assignment name  : repeat_alpha
// Expected files   : repeat_alpha.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called repeat_alpha that takes a string and display it
// repeating each alphabetical character as many times as its alphabetical index,
// followed by a newline.

// 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

// Case remains unchanged.

// If the number of arguments is not 1, just display a newline.

// Examples:

// $>./repeat_alpha "abc"
// abbccc
// $>./repeat_alpha "Alex." | cat -e
// Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
// $>./repeat_alpha 'abacadaba 42!' | cat -e
// abbacccaddddabba 42!$
// $>./repeat_alpha | cat -e
// $
// $>
// $>./repeat_alpha "" | cat -e
// $
// $>

#include <unistd.h>

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	re;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
		{
			re = 1;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				re += av[1][i] - 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				re += av[1][i] - 'A';
			while (re--)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

// int	repeat_alpha(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 'a' + 1);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c - 'A' + 1);
// 	return (1);
// }

// int	main(int ac, char **av)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	if (ac == 2)
// 	{
// 		while (av[1][i])
// 		{
// 			count = repeat_alpha(av[1][i]);
// 			while (count--)
// 			{
// 				write (1, &av[1][i], 1);
// 			}
// 			i++;
// 		}
// 	}
// 	write (1, "\n", 1);
// 	return (0);
// }
