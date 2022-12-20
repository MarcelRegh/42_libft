/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:07:09 by mregh             #+#    #+#             */
/*   Updated: 2022/12/19 22:29:09 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_dst;
	char	*ptr_src;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (ptr_dst != ptr_src)
	{
		if (ptr_dst > ptr_src)
			while (len-- > 0)
				ptr_dst[len] = ptr_src[len];
		else
			ft_memcpy(dst, src, len);
	}
	return (dst);
}
