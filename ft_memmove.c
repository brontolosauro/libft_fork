#include "libft.h"
#include <stdlib.h>
#include <limits.h>
//#include <stdio.h>
//
//void	*ft_memmove(void *dest, const void *src, size_t n);
//
//int	main(void)
//{
//	int		size = 128 * 1024 * 1024;
//	char	*dst = (char *)malloc(sizeof(char) * size);
//	char	*data = (char *)malloc(sizeof(char) * size);
//
//	ft_memset(data, 'A', size);
//	if (!dst)
//		printf("test failed\n");
//	ft_memmove(dst, data, size);
//	printf("tuttapposto\n");
//	return (0);
//}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	tmp[n];

	if (!n)
		return (dest);
	if (!dest || !src)
		return (dest);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}
