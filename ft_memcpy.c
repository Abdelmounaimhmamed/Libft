#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	const char	*src1;

	i = 0;
	dest1 = (char *)dest;
	src1 = (const char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	dest1[i] = '\0';
	return (dest);
}
