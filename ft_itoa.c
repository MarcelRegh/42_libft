/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:54:09 by mregh             #+#    #+#             */
/*   Updated: 2023/01/11 08:47:25 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_negative(int nbr)
{
	if (nbr == MIN_INT)
		return (2);
	if (nbr < 0)
		return (1);
	return (0);
}

static int	ft_intlen(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	i++;
	return (i);
}

static void	ft_set_values(char *string, int nbr, int end)
{
	string[end--] = '\0';
	while (nbr > 9)
	{
		string[end--] = ((nbr % 10) + 48);
		nbr = nbr / 10;
	}
	string[end] = nbr + 48;
}

char	*ft_itoa(int nbr)
{
	int		negative;
	char	*string;

	negative = ft_is_negative(nbr);
	if (negative == 2)
		return (ft_strdup("-2147483648"));
	if (negative == 1)
	{
		nbr = -nbr;
		string = (char *)ft_calloc(sizeof(char), ft_intlen(nbr) + 2);
		if (string)
		{
			string[0] = '-';
			ft_set_values(string, nbr, ft_intlen(nbr) + 1);
		}
	}
	if (negative == 0)
	{
		string = (char *)ft_calloc(sizeof(char), ft_intlen(nbr) + 1);
		if (string)
			ft_set_values(string, nbr, ft_intlen(nbr));
	}
	return (string);
}
