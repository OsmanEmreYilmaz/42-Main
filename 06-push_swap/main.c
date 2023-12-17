/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <osyilmaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:25:17 by osyilmaz          #+#    #+#             */
/*   Updated: 2023/12/16 14:25:18 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sort_control(t_stack *data)
{
	int	i;

	i = 1;
	while (i < data->a_len)
	{
		if (data->a_s[i - 1] > data->a_s[i])
			return (1);
		i++;
	}
	ft_free(data);
	exit(EXIT_SUCCESS);
}

void	repeat_numbers(t_stack *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < (data->a_len - 1))
	{
		j = i + 1;
		while (j < data->a_len)
		{
			if (data->a_s[i] == data->a_s[j])
				error(data);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*data;
	int		i;

	if (argc < 2)
		exit(EXIT_FAILURE);
	data = ft_calloc(sizeof(t_stack), 1);
	ft_a_len(argv, data);
	data->len = data->a_len;
	data->a_s = ft_calloc(data->a_len, sizeof(int));
	data->b_s = ft_calloc(data->a_len, sizeof(int));
	i = 1;
	while (i < argc)
		my_atoi(argv[i++], data);
	data->b_len = 0;
	if (data->a_len < 2)
	{
		ft_free(data);
		exit(EXIT_SUCCESS);
	}
	repeat_numbers(data);
	if (sort_control(data))
		ft_sort(data);
	ft_free(data);
}
