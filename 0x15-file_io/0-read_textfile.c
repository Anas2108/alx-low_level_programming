#include "main.h"

/**
 * read_textfile - print the letters if text file
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *buff;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	rd = read(f, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(f);

	free(buff);

	return (wr);
}
