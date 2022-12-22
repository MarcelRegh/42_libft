/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 01:05:00 by mregh             #+#    #+#             */
/*   Updated: 2022/12/22 02:03:45 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (ptr != NULL)
	{
		i = 0;
		while (*s1 != '\0' && s1 != NULL)
		{
			ptr[i] = *s1;
			i++;
			s1++;
		}
		while (*s2 != '\0' && s2 != NULL)
		{
			ptr[i] = *s2;
			i++;
			s2++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
