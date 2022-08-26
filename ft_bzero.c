#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s,'\0',n);
}
/*
int     main(int argc , char **argv)
{
        ft_bzero(argv[1],7);
        size_t  i;

         i = 0;
         while (argv[1][i] == '\0')
                 i++;
         while (argv[1][i] != '\0')
         {
                 printf("%c",argv[1][i]);
                 i++;
         }
         return 0;
	
}
*/
