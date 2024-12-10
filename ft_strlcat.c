/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:59:05 by rfani             #+#    #+#             */
/*   Updated: 2024/12/10 17:10:33 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <bsd/string.h>
//
//size_t	ft_strlcat(char *dst, const char *src, size_t size);
//
//int	main(void)
//{
//	char	*src = "pqrstuvwz";
//	char	*dst = "abcd";
//	size_t	size = 0;
//	size_t	res;
//	while (size < 11)
//	{
//		res = ft_strlcat(src, dst, size);
//		printf("ft_strlcat(\"%s\", \"%s\", %lu) = %lu\n", src, dst, size, res);
//		res = ft_strlcat(src, dst, size);
//		printf("strlcat(\"%s\", \"%s\", %lu) = %lu\n", src, dst, size, res);
//		size++;
//	}
//	return (0);
//}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dst_len + 1)
	{
		while (i < (size - dst_len - 1) && src[i] != '\0')
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		if (src[i] == '\0')
		{
			dst[dst_len + i + 1] = '\0';
			return (dst_len + src_len);
		}
		else
			return (size);
	}
	return (size);
}
