// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

// STRSPN(3)                BSD Library Functions Manual                STRSPN(3)

// NAME
//      strspn, strcspn -- span a string

// LIBRARY
//      Standard C Library (libc, -lc)

// SYNOPSIS
//      #include <string.h>

//      size_t
//      strspn(const char *s, const char *charset);

//      size_t
//      strcspn(const char *s, const char *charset);

// DESCRIPTION
//      The strspn() function spans the initial part of the null-terminated string s as long as the characters
//      from s occur in the null-terminated string charset.  In other words, it computes the string array
//      index of the first character of s which is not in charset, else the index of the first null character.

//      The strcspn() function spans the initial part of the null-terminated string s as long as the charac-
//      ters from s do not occur in the null-terminated string charset (it spans the complement of charset).
//      In other words, it computes the string array index of the first character of s which is also in
//      charset, else the index of the first null character.

// RETURN VALUES
//      The strspn() and strcspn() functions return the number of characters spanned.

// SEE ALSO
//      memchr(3), strchr(3), strpbrk(3), strrchr(3), strsep(3), strstr(3), strtok(3), wcsspn(3)

// STANDARDS
//      The strspn() and strcspn() functions conform to ISO/IEC 9899:1990 (``ISO C90'').

#include <stdlib.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while (s[i])
	{
		size_t	j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

// Explanation of the Code:
// Initialize Index:
// i is initialized to 0 and will be used to traverse the input string s.

// Outer While Loop:
// This loop continues as long as there are characters left in s to process (s[i]).

// Inner While Loop:
// This loop checks each character in accept to see if it matches the current character in s.
// If a match is found (s[i] == accept[j]), the loop breaks.

// Check for Match:
// After the inner loop, if no match is found (i.e., accept[j] == '\0), it means the current character in s is not in accept, so we return the current index i.

// Return Result:
// The function returns the number of characters in the initial segment of s that consist only of characters from accept.




// #include <stdio.h>

// int main(void)
// {
// 	const char *s = "hello, world";
// 	const char *accept = "hel";
// 	size_t result = ft_strspn(s, accept);
// 	printf("The initial segment of '%s' containing only characters from '%s' is %zu characters long.\n", s, accept, result);
// 	return (0);
// }
