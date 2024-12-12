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
#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char	*dst = "pqrstuvwz";
	char	*src = "abcd";
	char	*o_dst = "pqrstuvwz";
	char	*o_src = "abcd";
	size_t	size = 20;
	size_t	res;
//	while (size < 11)
//	{
//		res = ft_strlcat(dst, src, size);
//		printf("ft_strlcat(\"%s\", \"%s\", %lu) = %lu\n", dst, src, size, res);
//		printf("%s\n", dst);
//		*dst = "pqrstuvwz";
//		*src = "abcd";
//		res = ft_strlcat(dst, src, size);
//		printf("strlcat(\"%s\", \"%s\", %lu) = %lu\n", dst, src, size, res);
//		printf("%s\n", dst);
//		size++;
//	}
//	*dst = "pqrstuvwz";
//	*src = "abcd";
//	size = 20;
	printf("ft_strlcat(\"%s\", \"%s\", %lu) = ", dst, src, size);
	res = ft_strlcat(dst, src, size);
	printf("%lu\n", res);
	printf("%s\n", dst);
	printf("strlcat(\"%s\", \"%s\", %lu) = ", o_dst, o_src, size);
	res = strlcat(o_dst, o_src, size);
	printf("%lu\n", res);
	printf("%s\n", dst);
	return (0);
}

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
			*(dst + dst_len + i) = src[i];
			i++;
		}
		if (src[i] == '\0')
		{
			*(dst + dst_len + i + 1) = '\0';
			return (dst_len + src_len);
		}
		else
			return (size);
	}
	return (size + src_len);
}
