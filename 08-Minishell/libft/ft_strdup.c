/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:31:36 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:31:38 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s1);
	str = malloc(sizeof(char) * slen + 1);
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s1, slen + 1);
	return (str);
}
