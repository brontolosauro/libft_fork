#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//
//void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_move_bw(void *dest, const void *src, size_t n);
void	*ft_move_fw(void *dest, const void *src, size_t n);
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
	if (!n)
		return (dest);
	if (!dest || !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (src + n >= dest && dest > src)
		ft_move_bw(dest, src, n);
	else if (dest + n > src && src > dest)
		ft_move_fw(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

void	*ft_move_bw(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		*((unsigned char *)dest + n - i) = *((unsigned char *)src + n - i);
		i++;
	}
	return (dest);
}

void	*ft_move_fw(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dest);
}
