// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	// Check for NULL pointers to avoid undefined behavior
	if (!s1 || !s2)
		return (NULL);
	int i = 0;
	// Iterate over each character in s1 using a while loop
	while (s1[i] != '\0')
	{
		int j = 0;
		// For each character in s1, check against all characters in s2
		while (s2[j] != '\0')
		{
			// If a match is found, return a pointer to the character in s1
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	// If no match is found, return NULL
	return (NULL);
}
