#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char const  *s, char c);

int	main(void)
{
//	char	*str = "How are you doing today?";
	char	*str = "hello!";
	char	delimiter = ' ';
	char	**split; 
	int		i;

	split = ft_split(str, delimiter);
	i = 0;
	while (split[i] != NULL)
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	k;

	split = ft_calloc(ft_strlen(s), sizeof(char *));
	split[0] = ft_calloc(ft_strlen(s)*ft_strlen(s), sizeof(char));
	i = 0;
	k = 0;
	while (s[k] != '\0' )
	{
		j = 0;
		while (s[k] != c)
		{
			split[i][j] = s[k]
			j++;
			k++;
		}
		if (j != 0)
		{
			i++;
			*split[i] = split[0] + j + 1;
		
		i++;
		k++;
	}
	split[i] = NULL;
	return (split);
}
