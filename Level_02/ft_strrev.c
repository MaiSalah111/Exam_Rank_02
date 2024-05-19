// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char *ft_strrev(char *str)
{
	int i = 0;
	int len = ft_strlen(str) - 1;
	char tmp;
	while(i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		len--;
		i++;
	}
	return(str);
}

#include <stdio.h>
int main(void)
{
    char str[] = "taha";
    printf("%s\n",ft_strrev(str));
    return(0);
}