#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb == -2147483647)
	{
		ft_putchar_fd('-',fd);
		ft_putchar_fd('2',fd);
		nb = 147483647;
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-',fd);
		nb = nb * -1;
	}
	if (nb <= 9)
		ft_putchar_fd(nb + 48 ,fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
