#include <stdio.h>
#define OUT 0
#define IN 1

int main()
{
	int c, numLines, numWords, numChars, state;

	state = OUT;

	numLines = numWords = numChars = 0;

	while ((c = getchar()) != EOF)
	{
		++numChars;
		if (c == '\n')
		{
			++numLines;
		}
		else if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}

		else
		{
			++numWords;
			state = IN;
		}
	}

	printf("%d Characters, %d Words, %d Lines\n", numChars, numWords, numLines);
}
