#include "libft.h"
#include <stdlib.h>

int		ft_log(int n);

char	*ft_itoa(int n)
{
	char	*itoa;
	int		log;
	int		neg;
	int		i;

	log = ft_log(n);
	neg = 0;
	i = 0;
	if (n < 0)
	{		
		itoa = ft_calloc(log + 2, sizeof(char));
		neg = 1;
		n *= -1;
	} else
		itoa = ft_calloc(log + 1, sizeof(char));
	if (neg)
		itoa[0] = '-';
	while (n !0)
	{
}

int		ft_log(int n)
{
	int log;

	log = 0;
	if (n < 0)
		n *= -1;
	if (n = 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		log++;
	}
	return (log);
}
