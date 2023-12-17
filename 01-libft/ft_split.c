/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:20:17 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:05:03 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_word(char const *s, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!tab)
		return (NULL);
	start = 0;
	end = 0;
	while (i < ft_word(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		tab[i++] = ft_substr(s, start, (end - start));
		start = end;
	}
	tab[i] = 0;
	return (tab);
}
