/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:48:49 by mregh             #+#    #+#             */
/*   Updated: 2022/12/20 00:51:55 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	unsigned char	*ptr_b1;
	unsigned char	*ptr_b2;

	ptr_b1 = (unsigned char *)b1;
	ptr_b2 = (unsigned char *)b2;
	i = 0;
	while (i < len)
	{
		if (ptr_b1[i] > ptr_b2[i])
			return (ptr_b1[i] - ptr_b2[i]);
		if (ptr_b1[i] < ptr_b2[i])
			return (-ptr_b2[i]);
		i++;
	}
	return (0);
}
