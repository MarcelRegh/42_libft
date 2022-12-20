/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 01:13:07 by mregh             #+#    #+#             */
/*   Updated: 2022/12/20 01:37:28 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr_b;

	ptr_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		if (*ptr_b == (unsigned char)c)
			return (ptr_b);
		ptr_b++;
		i++;
	}
	return (NULL);
}
