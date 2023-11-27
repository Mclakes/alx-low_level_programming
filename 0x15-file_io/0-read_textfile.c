#include "main.h"

/**
  * read_textfile - Write a function that reads a text
  * file and prints it to the POSIX standard output.
  *
  * @filename : file name
  * @letters : no of letters to print.
  *
  * Return : no of letters or 0.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_distributor;
	ssize_t _reading, _writing;
	char  *pt_buffer;

	/* check if file name exist */
	if (!filename)
	{
		return (0);
	}

	/* to open file */
	file_distributor = open(filename, O_RDONLY);
	if (file_distributor == -1)
		return (0);

	/*to buffeer */
	pt_buffer = malloc(sizeof(char) * letters);
	if (pt_buffer == NULL)
		return (0);

	/* To read */
	_reading = read(file_distributor, pt_buffer, letters);
	if (_reading == -1)
	{
		free(pt_buffer);
		close(file_distributor);
		return (0);
	}

	/* To write */
	_writing = write(STDOUT_FILENO, pt_buffer, _reading);
	if (_writing == -1)
	{
		free(pt_buffer);
		close(file_distributor);
		return (0);
	}
	close(file_distributor);
	return (_reading);
}
