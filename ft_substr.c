/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 10:18:32 by mregh             #+#    #+#             */
/*   Updated: 2022/12/22 11:48:55 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (start > ft_strlen(s))
		len = 0;
	if (start < ft_strlen(s))
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
	ptr = (char *)ft_calloc(sizeof(char), (len + 1));
	if (ptr != NULL && ft_strlen(s) > start)
		ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
