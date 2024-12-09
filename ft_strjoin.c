#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//
//char	*ft_strjoin(char const *s1, char const *s2);
//
//int	main(void)
//{
//	char *s1 = "my favorite animal is";
//	char *s2 = " ";
//	char *s3 = "the nyancat";
//	char *res = ft_strjoin(ft_strjoin(s1, s2), s3);
//	printf("%s\n", res);
//	return (0);
//}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		result[i] = s2[i - len1];
		i++;
	}
	return (result);
}