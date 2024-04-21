// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size;
	int	*array;
	int	i;

	size = 0;
	i = 0;
	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	array = (int *)malloc(size * sizeof(16));
	if (array)
		return (0);
	while (i < size)
	{
		if (start <= end)
		{
			array[i] = start + i;
		}
		else
		{
			array[i] = start - i;
		}
		i++;
	}
	return (array);
}

int	main(void)
{
	int	start;
	int	end;
	int	size;
	int	*array;
	int	i;

	i = 0;
	end = 11;
	start = 4;
	size = end - start + 1;
	array = ft_range(start, end);
	while (i < size)
	{
		printf("%d ,", array[i]);
		i++;
	}
}
