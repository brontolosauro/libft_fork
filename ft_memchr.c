#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*match;
	size_t	i;

	match = NULL;
	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			match = ((unsigned char *)s + i);
			break ;
		}
		i++;
	}
	return (match);
}
