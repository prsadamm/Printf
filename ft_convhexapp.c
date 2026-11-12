#include "ft_printf.h"

int	ft_convhexapp(unsigned long int n)
{
	if (n == 0)
	{	
		ft_putstrlen("0x0");
		return (3);
	}
	else
	{
		ft_putstrlen("0x");
		return (ft_convhexap(n));
	}
}
