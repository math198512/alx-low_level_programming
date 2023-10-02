#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: filename to be read and printed.
 * @letters: the number of letters it should read and print.
 * Return: 0 if the file can not be opened or read or
 * filename is NULL, or if write fails or does not
 * write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_handle;
	file_handle = fopen("filename", "r");

}
