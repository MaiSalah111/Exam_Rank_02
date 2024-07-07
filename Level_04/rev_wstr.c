// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in 
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the 
// begin/end of the string.

// If the number of parameters is different from 1, the program will display 
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional" 
// spaces (meaning that there won't be additionnal spaces at the beginning or at 
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "le temps du mepris precede celui de l'indifference" | cat -e
// l'indifference de celui precede mepris du temps le$
// $> ./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "il contempla le mont" | cat -e
// mont le contempla il$
// $> ./rev_wstr | cat -e
// $
// $>

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char **tab = (char **)malloc(sizeof(**tab) * 1000);

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if (str[i] > 32)
		{
			k = 0;
			tab[j] = (char *)malloc(sizeof(char *) * 1000);
			while(str[i] > 32)
			{
				tab[j][k] = str[i];
				i++;
				k++;
			}
			tab[j][k] = '\0';
			j++;
		}
		else 
			i++;
	}
	tab[j] = 0;
	return(tab);
}

int main(int ac, char **av)
{
	int i = 0;
	char **words;
	if (ac == 2)
	{
		words = ft_split(av[1]);
		while(words[i])
			i++;
		i--;
		while(i >= 0)
		{
			ft_putstr(words[i])
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
}