#include "ft_printf.h"

int	ft_putnbrlenu(unsigned int n)
{
	int				i;
	unsigned int	nbr;

	if (n == 0)
		return (ft_putcharlen('0'));
	nbr = n;
	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (nbr > 9)
		ft_putnbrlenu(nbr / 10);
	ft_putcharlen((nbr % 10) + 48);
	return (i);
}	
