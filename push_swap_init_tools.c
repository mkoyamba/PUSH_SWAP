/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init_tools.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:32:49 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 22:10:35 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_max(t_data *main_data, int	*new_stack)
{
	int	n;
	int	current;

	current = 0;
	n = 0;
	while (n < main_data->len)
	{
		if (main_data->stack[n] > main_data->stack[current])
			current = n;
		n++;
	}
	main_data->stack[current] = INT32_MAX;
	new_stack[current] = main_data->len - 1;
}

void	data_free(char **data, int state)
{
	size_t	n;

	n = 0;
	if (!data)
		return ;
	while (data[n])
	{
		free(data[n]);
		n++;
	}
	free(data);
	if (state == 1)
		stop_error();
}

void	get_min(t_data *main_data, int index, int *new_stack)
{
	int	n;
	int	current;

	current = 0;
	n = 0;
	while (n < main_data->len)
	{
		if (main_data->stack[n] < main_data->stack[current])
			current = n;
		n++;
	}
	main_data->stack[current] = INT32_MAX;
	new_stack[current] = index;
}
