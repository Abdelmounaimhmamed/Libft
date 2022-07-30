#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = (char *)malloc(sizeof(char) * len);
	i = 0;
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	char	*str;
	int	i;

	str = ft_substr(argv[1],3,7);
	i = 0;
	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
	return 0;
}
*/
