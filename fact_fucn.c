#include "factor.h"
/**
 * main- main function
 * @argc: count .
 * @argv: vector
 *
 * Return: void always
 */


int main(int argc, char *argv[])
{
	 char *lineBuffer = NULL;
	 size_t bufferSize = 0;
	 ssize_t bytesRead;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		return (EXIT_FAILURE);
	}

	FILE *filePointer = fopen(argv[1], "r");

	if (filePointer == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	while ((bytesRead = getline(&lineBuffer, &bufferSize, filePointer)) != -1)
	{
		factorize(lineBuffer);
	}

	free(lineBuffer);
	fclose(filePointer); /*Close the file when done*/

	return (EXIT_SUCCESS);
}
