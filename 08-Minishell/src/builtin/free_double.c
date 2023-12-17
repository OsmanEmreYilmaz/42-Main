/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:12:13 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:12:15 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

void	free_double_pointer(char ***str)
{
	int	i;

	i = 0;
	if ((*str) == NULL)
		return ;
	while ((*str)[i])
		free((*str)[i++]);
	free((*str)[i]);
	free(*str);
}
