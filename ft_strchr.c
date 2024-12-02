#include "libft.h"

char*	ft_strchr(const char *s, int c)
{
	char	*match;
	int		i;

	match = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			match = (char *)&s[i];
			break;
		}
		i++;
	}
	return (match);
}
