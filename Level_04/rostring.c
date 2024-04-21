// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *str)
{
	int i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	int start = i;
	int first_word_length = 0;
	while (str[i] && !is_space(str[i]))
	{
		i++;
		first_word_length++;
	}
	while (str[i] && is_space(str[i]))
		i++;
	int	printed = 0;
	while (str[i])
	{
		if (!is_space(str[i]) && (printed == 0 || is_space(str[i - 1])))
		{
			if (printed)
				write(1, " ", 1);
			while (str[i] && !is_space(str[i]))
			{
				write(1, &str[i], 1);
				i++;
				printed = 1;
			}
		}
		else
			i++;
	}
	if (first_word_length > 0 && printed)
		write(1, " ", 1);
	write(1, str + start, first_word_length);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
