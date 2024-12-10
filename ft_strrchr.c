/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:00:12 by rfani             #+#    #+#             */
/*   Updated: 2024/12/10 12:36:12 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*match;
	size_t	i;
	size_t	str_len;

	str_len = ft_strlen(s);
	match = NULL;
	i = 0;
	while (i <= str_len)
	{
		if (s[i] == (char)c)
		{
			match = (char *)&s[i];
		}
		i++;
	}
	return (match);
}
