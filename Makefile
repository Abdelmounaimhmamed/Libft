
NAME = libft.a

CC = gcc

CFLAGS = -Werror -Wall -Wextra 

SRCS =ft_isalpha.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_isalnum.c ft_strlen.c ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_memchr.c  

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
