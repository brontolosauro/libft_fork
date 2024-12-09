/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:58:56 by rfani             #+#    #+#             */
/*   Updated: 2024/12/02 11:16:03 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
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
			break ;
		}
		i++;
	}
	return (match);
}
