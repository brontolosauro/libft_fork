/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:52:41 by rfani             #+#    #+#             */
/*   Updated: 2024/12/09 10:55:32 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//
//char	*ft_strtrim(char const *s1, char const *set);
//
//int		main(void)
//{
//	char *s1 = "  \t \t \n   \n\n\n\t";
//	char *s2 = "";
//	char *ret = ft_strtrim(s1, " \n\t");
//	int	cmp;
//	
//	printf("new_str = \"%s\"\n", ret);
//	printf("s2 = \"%s\"\n", s2);
//	cmp = strcmp(ret, s2);
//	if (!cmp)
//		printf("TEST_SUCCESS\n");
//	else
//		printf("TEST_FAILED\n");
//	return (0);
//}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		new_start;
	int		new_len;
	char	*new_str;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	new_start = i;
	i = ft_strlen(s1) -1;
	while (i >= 0 && ft_strchr(set, s1[i]))
		i--;
	new_len = i + 1 - new_start;
	if (new_len <= 0)
		new_len = 0;
	new_str = ft_calloc(new_len + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	return ((char *)ft_memcpy(new_str, &(s1[new_start]), new_len));
}
