/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:30:54 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:30:56 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	if (dst == src)
		return (dst);
	str1 = (char *)dst;
	str2 = (char *)src;
	if (str1 > str2)
	{
		while (len)
		{
			len--;
			*(str1 + len) = *(str2 + len);
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
