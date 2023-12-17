/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_paths.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:20:49 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:20:51 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

void	get_paths(void)
{
	int		index;
	char	**path;

	if (g_data.paths)
	{
		index = 0;
		while (g_data.paths[index])
			free(g_data.paths[index++]);
		free(g_data.paths);
	}
	index = is_env("PATH");
	if (index == -1)
	{
		g_data.paths = NULL;
		return ;
	}
	path = ft_split(g_data.env[index], '=');
	g_data.paths = ft_split(path[1], ':');
	free(path[0]);
	free(path[1]);
	free(path);
}

int	get_size_t_cmd(t_cmnd *t_cmd)
{
	if (!t_cmd)
		return (0);
	return (1 + get_size_t_cmd(t_cmd->next));
}
