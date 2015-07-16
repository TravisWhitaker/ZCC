#include <stdio.h>
#include "word_count.h"

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: word_count \"[test string]\"\n");
		return 0;
	}
	printf("Number of words: %d\n",word_count(argv[1]));
	return 0;
}
