#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t	i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;

	if (!d && !s)
		return (NULL);
	if ( d > s)
	{
		while ( i < n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else 
	{
		ft_memcpy(dest,src,n);
	}
	return dest;
}

/*
int main(int argc , char **argv)
{
	size_t	i;
	char	*str;
	str = ft_memmove(argv[1], argv[2],7);

	i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	return 0;
}
*/
