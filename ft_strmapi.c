/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:18:20 by mregh             #+#    #+#             */
/*   Updated: 2023/01/11 11:22:04 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*string;

	string = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (string)
	{
		i = 0;
		while (s[i] != '\0')
		{
			string[i] = f(i, s[i]);
			i++;
		}
		string[i] = '\0';
	}
	return (string);
}
