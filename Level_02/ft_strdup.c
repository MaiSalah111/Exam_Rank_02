// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// char	*ft_strdup(char *src)
// {
// 	int			i;
// 	int			len;
// 	char		*dup;

// 	i = 0;
// 	while (src[i])
// 	{
// 		i++;
// 	}
// 	len = i;
// 	dup = (char *)malloc(sizeof(char) * len + 1);
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (src[i])
// 	{
// 		dup[i] = src[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	return (dup);
// }

int	main(void)
{
	char	str[] = "Mai";
	printf("%s", ft_strdup(str));
}
