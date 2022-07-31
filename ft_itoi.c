#include "libft.h"

static size_t  numLen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if ( n < 0)
		count++;
	while(n)
	{
		n = n / 10;
		count++;
	}
	return count;
}

char	*ft_itoi(int n)
{
	long	nb;
	int	len;
	char	*str;

	nb = n;
	len = numLen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[len--] = '\0';
	while(nb)
	{
		str[len] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	return (str);
}
