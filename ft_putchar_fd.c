#include "libft.h"

void ft_putchar_fd(char s, int fd)
{
	write(fd, &s, 1);
}
