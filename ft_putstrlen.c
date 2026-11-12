#include "ft_printf.h"

int	ft_putstrlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstrlen("(null)");
		return (6);
	}
	while (str[i])
	{
		ft_putcharlen(str[i]);
		i++;
	}
	return (i);
}
