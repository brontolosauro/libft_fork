/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:52:13 by rfani             #+#    #+#             */
/*   Updated: 2024/12/09 10:52:18 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (start >= ft_strlen(s))
		return (result);
	else
	{
		i = 0;
		while (i < len && s[start + i] != '\0')
		{
			result[i] = s[start + i];
			i++;
		}
	}
	return (result);
}
