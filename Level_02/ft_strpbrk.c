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
	// Check for NULL pointers to avoid undefined behavior
	if (!s1 || !s2)
		return (NULL);
	int i = 0;
	// Iterate over each character in s1 using a while loop
	while (s1[i])
	{
		int j = 0;
		// For each character in s1, check against all characters in s2
		while (s2[j])
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

// #include <string.h>
// #include <stdio.h>

// int main(void)
// {
//     const char *s1 = "abcdef";
//     const char *accept1 = "de";
//     const char *s2 = "abcdef";
//     const char *accept2 = "xyz";
//     const char *s3 = "12345abc";
//     const char *accept3 = "cba";
//     const char *s4 = "hello world";
//     const char *accept4 = "o";

//     // Test cases
//     char *result1 = ft_strpbrk(s1, accept1);
//     char *result2 = ft_strpbrk(s2, accept2);
//     char *result3 = ft_strpbrk(s3, accept3);
//     char *result4 = ft_strpbrk(s4, accept4);

//     char *expected1 = strpbrk(s1, accept1);
//     char *expected2 = strpbrk(s2, accept2);
//     char *expected3 = strpbrk(s3, accept3);
//     char *expected4 = strpbrk(s4, accept4);

//     // Print results
//     printf("Result 1: %s, Expected: %s\n", result1, expected1);
//     printf("Result 2: %s, Expected: %s\n", result2 ? result2 : "NULL", expected2 ? expected2 : "NULL");
//     printf("Result 3: %s, Expected: %s\n", result3, expected3);
//     printf("Result 4: %s, Expected: %s\n", result4, expected4);

//     return (0);
// }
