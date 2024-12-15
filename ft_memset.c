/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:08:24 by rfani             #+#    #+#             */
/*   Updated: 2024/12/06 20:08:28 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (s);
	while (i < n)
	{
		*((unsigned char *)s + i) = (unsigned char)c;
		i++;
	}
	return (s);
}
