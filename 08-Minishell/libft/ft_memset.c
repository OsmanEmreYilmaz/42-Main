/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:30:59 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:31:01 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*metin;
	unsigned char	test;
	size_t			i;

	i = 0;
	metin = (unsigned char *) b;
	test = (unsigned char)c;
	while (i < len)
	{
		metin[i] = test;
		i++;
	}
	return (b);
}
