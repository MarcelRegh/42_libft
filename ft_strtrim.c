/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:04:35 by mregh             #+#    #+#             */
/*   Updated: 2022/12/22 14:49:59 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	start = 0;
	while (s1[start] != '\0' && ft_check_set(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_check_set(set, s1[end]) == 1)
		end--;
	ptr = (char *)ft_calloc(sizeof(char), (((end - start) + 1) + 1));
	if (ptr != NULL)
	{
		i = 0;
		while (i < ((end - start) + 1))
		{
			ptr[i] = s1[start + i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
