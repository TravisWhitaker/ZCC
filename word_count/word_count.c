#include "word_count.h"

unsigned int word_count(char *str)
{
	unsigned int ret = 0;
	if (!(*str))
	{
		return 0;
	}
	while(*str)
	{
		// current letter is not a space, next one is
		if (*str != ' ' && *(str + 1) == ' ')
		{
			ret++;
		}
		str++;
	}
	if (*(str - 1) != ' ')
	{
		ret++;
	}
	return ret;
}
