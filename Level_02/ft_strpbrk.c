// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);


// SYNOPSIS
//      #include <string.h>

//      char *
//      strpbrk(const char *s, const char *charset);

// DESCRIPTION
//      The strpbrk() function locates in the null-terminated string s the first occurrence of any character
//      in the string charset and returns a pointer to this character.  If no characters from charset occur
//      anywhere in s strpbrk() returns NULL.

// SEE ALSO
//      memchr(3), strchr(3), strcspn(3), strrchr(3), strsep(3), strspn(3), strstr(3), strtok(3), wcspbrk(3)

// STANDARDS
//      The strpbrk() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

// BSD                              June 4, 1993                              BSD


#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	size_t i = 0;

	while (s1[i])
	{
		size_t j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (char *)(s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

// Explanation of the Code:
// Outer Loop (over s1):

// Loop through each character in s1 using index i.
// Inner Loop (over s2):

// For each character in s1, loop through each character in s2 using index j.
// If s1[i] matches s2[j], return a pointer to the character in s1.
// Return NULL:

// If no match is found after checking all characters in s1 against s2, return NULL.
// Testing the Function:


// #include <stdio.h>

// int main(void)
// {
// 	const char *s1 = "hello, world";
// 	const char *s2 = "ole";
// 	char *result = ft_strpbrk(s1, s2);

// 	if (result)
// 		printf("The first occurrence in '%s' of any characters in '%s' is '%c' at position %ld.\n", s1, s2, *result, result - s1);
// 	else
// 		printf("No characters from '%s' found in '%s'.\n", s2, s1);

// 	return (0);
// }

