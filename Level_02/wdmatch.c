// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>

void    wdmatch(char *str1, char *str2)
{
    int i = 0;
    int j = 0;

    while (str1[i] && str2[j])
    {
        if (str1[i] == str2[j])
            i++;
        j++;
    }
    
    if (!str1[i])
        write(1, str1, i);
    write(1, "\n", 1);
}

int     main(int argc, char **argv)
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    else
        write(1, "\n", 1);
    return (0);
}