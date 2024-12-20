#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Description: This function appends `text_content` at the end of the
 * specified file. If the file does not exist, or if the program does
 * not have permission to write to the file, it returns -1. If `text_content`
 * is NULL, no text is appended, and the function returns 1 if the file exists.
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
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
