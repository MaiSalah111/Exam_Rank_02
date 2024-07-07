// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);

#include <stdlib.h>

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

// #include <stdlib.h>

// char	**ft_split(char *str)
// {
// 	int		str_i;
// 	int		word_i;
// 	int		letter_i;
// 	char	**word_array;

// 	str_i = 0;
// 	word_array = malloc(sizeof(char) * 4096);
// 	while (str[str_i] == ' ' || str[str_i] == '\t' || str[str_i] == '\n')
// 	{
// 		str_i++;
// 	}
// 	word_i = 0;
// 	while (str[str_i] != '\0')
// 	{
// 		if (str[str_i] > 32)
// 		{
// 			letter_i = 0;
// 			word_array[word_i] = (char *)malloc(sizeof(char) * 4096);
// 			while (str[str_i] > 32)
// 			{
// 				word_array[word_i][letter_i] = str[str_i];
// 				str_i++;
// 				letter_i++;
// 			}
// 			word_array[word_i][letter_i] = '\0';
// 			word_i++;
// 		}
// 		else
// 		{
// 			str_i++;
// 		}
// 	}
// 	word_array[word_i] = (NULL);
// 	return (word_array);
// }

