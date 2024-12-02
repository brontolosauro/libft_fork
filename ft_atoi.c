/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:57:29 by rfani             #+#    #+#             */
/*   Updated: 2024/12/02 11:09:48 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//
//int	ft_atoi(const char *str);
//
//int main()
//{
//	char str[] = "Today's temperature is 24 degrees";
//	printf("str[]=\"%s\"\n", str);
//	int amount = ft_atoi(str);
//	printf("ft_atoi(str) = %d\n", amount);
//
//	return (0);
//}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = 10 * n + (str[i] - '0');
		}
		i++;
	}
	return (n);
}
