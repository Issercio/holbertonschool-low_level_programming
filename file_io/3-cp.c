#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * copy_file - Copies content from one file to another.
 * @file_from: The source file to copy from.
 * @file_to: The destination file to copy to.
 *
 * Return: No return value. Exits with an error code on failure.
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[1024];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
dprintf(2, "Error: Can't write to file %s\n", file_to), exit(99);
while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
dprintf(2, "Error: Can't write to file %s\n", file_to), exit(99);
}
if (bytes_read == -1)
dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
if (close(fd_from) == -1)
dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
if (close(fd_to) == -1)
dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
}
int main(int argc, char *argv[])
{
if (argc != 3)
dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);
copy_file(argv[1], argv[2]);
return (0);
}
