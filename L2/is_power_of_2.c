// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);

int is_power_of_2(unsigned int n) {
    // A power of 2 has only one bit set in its binary representation.
    // So, if we bitwise AND the number with (number - 1), it should result in 0.
    // This works because in binary, subtracting 1 from a power of 2 flips all the bits to its right.
    // Example: 8 (1000) - 1 = 7 (0111)
    // 1000 & 0111 = 0000
    // If the result is 0, it's a power of 2.

    if (n == 0)
        return 0;
    return !(n & (n - 1));
}

// int	is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 		return (0);
// 	while (n > 1)
// 	{
// 		if (n % 2 == 0)
// 			n = n / 2;
// 		else
// 			return (0);
// 	}
// 	return (1);
// }

// // OR 

// int	is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 	{
// 		return (0);
// 	}
// 	while (n % 2 == 0)
// 	{
// 		n = n / 2;
// 	}
// 	if (n == 1)
// 	{
// 		return (1);
// 	}
// }