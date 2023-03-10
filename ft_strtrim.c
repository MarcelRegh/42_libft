/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:04:35 by mregh             #+#    #+#             */
/*   Updated: 2023/01/11 11:56:38 by mregh            ###   ########.fr       */
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

	start = 0;
	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	while (ft_check_set(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_check_set(set, s1[end -1]) == 1)
		end--;
	return (ft_substr(s1, start, end - start));
}
