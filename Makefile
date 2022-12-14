
NAME = libft.a

CC = gcc

CFLAGS = -Werror -Wall -Wextra 

SRCS =ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_strlen.c ft_isprint.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strlcpy.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_putstr_fd.c ft_putchar_fd.c ft_strjoin.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_itoi.c ft_memmove.c ft_isascii.c ft_strmapi.c  ft_striteri.c 
OBJS = $(SRCS:.c=.o)


all : $(NAME)

%.o : %.c 
	$(CC)  $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

clean : 
	rm -rf $(OBJS)


fclean : clean 
	rm -rf $(NAME)

re : fclean all 
