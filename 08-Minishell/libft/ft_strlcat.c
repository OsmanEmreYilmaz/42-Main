/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:31:50 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:31:52 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	l;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	l = dstlen;
	if (dstsize <= l)
		return (dstsize + srclen);
	while (src[i] != '\0' && l + 1 < dstsize)
		dst[l++] = src[i++];
	dst[l] = '\0';
	return (dstlen + srclen);
}
