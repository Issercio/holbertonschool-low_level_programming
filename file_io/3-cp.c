#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
void handle_error(int code, const char *message)
{
dprintf(2, "%s", message);
exit(code);
}
int main(int argc, char *argv[])
{
int fd_from, fd_to, read_size, write_size;
char buffer[BUFFER_SIZE];
if (argc != 3)
handle_error(97, "Usage: cp file_from file_to\n");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
exit(99);
}
while ((read_size = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_size = write(fd_to, buffer, read_size);
if (write_size == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(fd_from);
close(fd_to);
exit(99);
}
}
if (read_size == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(fd_from);
close(fd_to);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(2, "Error: Can't close fd %d\n", fd_to);
exit(100);
}
return 0;
}
