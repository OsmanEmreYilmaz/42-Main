/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_cmnd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:21:32 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:21:34 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

int	count_cmnd(t_token *t_token)
{
	int	count;

	count = 0;
	if (t_token->if_red)
	{
		t_token = t_token->next;
		count++;
	}
	while (t_token)
	{
		if (!t_token->if_pipe && !t_token->if_red)
			count++;
		else
			break ;
		t_token = t_token->next;
	}
	return (count);
}
