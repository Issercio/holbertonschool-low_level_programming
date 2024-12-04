#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file and writes text to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Description: This function creates a file with the specified `filename` 
 * and writes `text_content` to it. If `text_content` is NULL, an empty 
 * file is created. The file permissions are set to `rw-------` (0600). 
 * If the file already exists, it is truncated.
 *
 * Return: 1 on success, -1 on failure (e.g., file cannot be created,
 *         file cannot be written, write fails, etc.).
 */
int create_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}
if (text_content != NULL)
{
bytes_written = write(fd, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
