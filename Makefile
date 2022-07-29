
NAME = libft.a

CC = gcc

CFLAGS = -Werror -Wall -Wextra 

SRCS = ft_isalpha.c    

OBJS = $(SRCS:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS) libft.h
	ar rcs $(NAME) $(OBJS)

%.o : %.c 
	$(CC)  $(CFLAGS) -o $@ -c $<


clean : 
	rm -rf $(OBJS)


fclean : clean 
	rm -rf $(NAME)

re : fclean all 
