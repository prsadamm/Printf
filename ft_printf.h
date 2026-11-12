#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

int	ft_printf(char const *s, ...);
int	ft_putcharlen(int c);
int	ft_putnbrlen(int n);
int	ft_putnbrlenu(unsigned int n);
int	ft_putstrlen(char *str);
int	ft_convhexamin(unsigned int n);
int	ft_convhexamaj(unsigned int n);
int	ft_convhexap(unsigned long int n);
int	ft_convhexapp(unsigned long int n);

#endif
