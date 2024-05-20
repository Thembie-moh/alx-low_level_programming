#include "main.h"
#include <stdio.h>
#include <stdlb.h>

Char *create_buffer(char *file);
void close_file(int fd);
 /**
 * Create_buffer - The function will copy the contents of a file to another file
 * @file: The buffer that will store the characters
 * Return: The pointer to the new buffer
 */

char *create_buffer(char *file)
{
	char *buffer;
	buffer = malloc(sizeof(char) * 1024);

	if(buffer == NULL)
 {
	dprint(STDERR_FILENO,
	"Error: Can't write to %s\n",file);
	exit(99);
	}
	return(buffer):
}

/**
 * close_file - The function is required to closes file descriptors.
 * @fd: The file name of the descriptor to be closed 
 */
