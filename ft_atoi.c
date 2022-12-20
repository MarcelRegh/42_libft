/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 23:02:44 by mregh             #+#    #+#             */
/*   Updated: 2022/12/18 00:20:24 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	signs;

	result = 0;
	signs = 0;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13)
		|| (*nptr == 43 || *nptr == 45))
	{
		if (signs != 0)
			return (0);
		if (*nptr == 45 && signs == 0)
			signs -= 1;
		if (*nptr == 43 && signs == 0)
			signs += 1;
		nptr++;
	}
	if (signs == 0)
		signs = 1;
	while (*nptr >= 48 && *nptr <= 57)
	{
		result = result * 10 + *nptr - 48;
		nptr++;
	}
	return (result * signs);
}
