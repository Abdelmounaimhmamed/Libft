#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
size_t	ft_strlen(char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void	*s, size_t n);

#endif
