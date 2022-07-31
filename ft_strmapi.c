#include "libft.h"

/*
--using the concept of callback functions .
*/

/*
char	ft_addChar(unsigned int i, char c)
{
	return (c);
} 
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!f)
		return (NULL);
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i,s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main(int argc , char **argv)
{
	printf("--------%s-----------\n",ft_strmapi(argv[1],ft_addChar));
	return (0);
}
*/
