#include <unistd.h>
#include <fcntl.h>
void Des (int fd)
{
    int *p = &fd;
    write (*p, "This is a new file\n", 19);
}
int main (void)
{
    Des (open ("new-file.txt", O_WRONLY | O_CREAT));
    return (0);
}
