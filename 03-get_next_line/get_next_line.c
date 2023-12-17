/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:20:17 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:03:16 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_buff(int fd, char *str)
{
	int		rd_byte;
	char	*buff;

	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	rd_byte = 1;
	while (!ft_strchr(str, '\n') && rd_byte != 0)
	{
		rd_byte = read(fd, buff, BUFFER_SIZE);
		if (rd_byte == -1)
		{
			free(str);
			free(buff);
			return (NULL);
		}
		buff[rd_byte] = '\0';
		str = ft_strjoin(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = ft_buff(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	str = ft_get_last(str, line);
	return (line);
}
