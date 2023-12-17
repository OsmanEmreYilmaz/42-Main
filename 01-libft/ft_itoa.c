/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:20:17 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:02:07 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long int tmp)
{
	int	count;

	count = 0;
	if (tmp == 0)
		return (1);
	if (tmp < 0)
	{
		count++;
		tmp = -tmp;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			count;
	int			i;
	long int	tmp;

	tmp = n;
	count = ft_count(tmp);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	i = 0;
	if (n < 0)
	{
		tmp = -tmp;
		str[0] = '-';
		i++;
	}
	while (count >= i)
	{
		str[count] = (char)(tmp % 10) + '0';
		tmp /= 10;
		count--;
	}
	return (str);
}
