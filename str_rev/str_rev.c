#include "str_rev.h"

ret_type str_rev(char *str)
{
	// Calculate string length (rather naively - please check strings first!)
	ret_type ret = 0;
	while (str[ret] != '\0')
	{
		ret++;
	}

	// Push it to upper half of the word for storage
	ret = ret << SHIFTAMT;
	
	// Use the lower halfword as the position pointer. We only need to iterate
	// over half of the string, otherwise it'll be reversed twice! 
	while (RETLO < RETHI >> 1)
	{
		// Good ol' XOR swap
		X = X ^ Y;
		Y = X ^ Y;
		X = X ^ Y;
		ret++;
	}

	// Return the processed string length
	return RETHI;
}
