/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:32:04 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:32:06 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return ((char *)s);
	i = 0;
	str = ft_strdup(s);
	if (!(str))
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
