#include "ft_printf.h"

int	ft_convhexamaj(unsigned int n)
{
	char			*hexa;
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return (ft_putcharlen('0'));
	hexa = "0123456789ABCDEF";
	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	if (nbr > 15)
		ft_convhexamaj(nbr / 16);
	write(1, &hexa[nbr % 16], 1);
	return (i);
}
