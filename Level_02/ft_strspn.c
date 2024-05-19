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

#include <stddef.h>

size_t ft_strspn(const char *s, const char *accept)
{
    // Check for NULL pointers to avoid undefined behavior
    if (!s || !accept)
        return (0);

    size_t i = 0;
    // Iterate over each character in s using a while loop
    while (s[i])
    {
        size_t j = 0;
        int found = 0;
        // For each character in s, check against all characters in accept
        while (accept[j])
        {
            // If a match is found, set found flag and break out of the inner loop
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            j++;
        }
        // If no match is found, break out of the outer loop
        if (!found)
            break;
        i++;
    }
    // Return the number of characters spanned
    return(i);
}

#include <stdio.h>
#include <string.h> 

int main()
{
    const char *s1 = "abcdef";
    const char *accept1 = "abc";
    const char *s2 = "abcdef";
    const char *accept2 = "xyz";
    const char *s3 = "12345abc";
    const char *accept3 = "1234567890";
    const char *s4 = "123abc45";
    const char *accept4 = "1234567890";
    
    // Test cases
    size_t result1 = ft_strspn(s1, accept1);
    size_t result2 = ft_strspn(s2, accept2);
    size_t result3 = ft_strspn(s3, accept3);
    size_t result4 = ft_strspn(s4, accept4);
    
    size_t expected1 = strspn(s1, accept1);
    size_t expected2 = strspn(s2, accept2);
    size_t expected3 = strspn(s3, accept3);
    size_t expected4 = strspn(s4, accept4);
    
    // Print results
    printf("Result 1: %zu, Expected: %zu\n", result1, expected1);
    printf("Result 2: %zu, Expected: %zu\n", result2, expected2);
    printf("Result 3: %zu, Expected: %zu\n", result3, expected3);
    printf("Result 4: %zu, Expected: %zu\n", result4, expected4);
    
    return (0);
}

