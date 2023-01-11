/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregh <mregh@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:15:40 by mregh             #+#    #+#             */
/*   Updated: 2023/01/10 14:58:35 by mregh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_get_substrings(char const *s, char c, size_t *sub_str)
{
	size_t	i;
	size_t	old_i;
	size_t	str_len;

	i = 0;
	old_i = 0;
	str_len = ft_strlen(s);
	while (i < str_len)
	{
		while (i < str_len)
		{
			if (s[i] != c)
				break ;
			i++;
		}
		old_i = i;
		while (i < str_len)
		{
			if (s[i] == c)
				break ;
			i++;
		}
		if (i > old_i)
			(*sub_str)++;
	}
}

static void	ft_split_strings(char const *s, char c, char **strings)
{
	size_t	substr_len;
	size_t	string_index;

	string_index = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			substr_len = 0;
			while (*s != '\0' && *s != c)
			{
				substr_len++;
				s++;
			}
			strings[string_index] = ft_substr(s - substr_len, 0, substr_len);
			string_index++;
		}
		else
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	sub_str;
	char	**strings;

	sub_str = 0;
	ft_get_substrings(s, c, &sub_str);
	strings = (char **)ft_calloc(sizeof(char *), (sub_str + 1));
	if (!s || !strings)
		return (0);
	ft_split_strings(s, c, strings);
	return (strings);
}
