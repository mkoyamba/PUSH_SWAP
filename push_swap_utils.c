/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:48:32 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/28 12:47:44 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stop_error(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	stack_free(t_data *main_data, int state)
{
	free(main_data->stack);
	free(main_data);
	if (state == 1)
		stop_error();
}

int	is_sorted(t_data *main_data)
{
	int	n;

	n = main_data->sep - 1;
	while (n > -1)
	{
		if (main_data->stack[n] != n)
			return (0);
		n--;
	}
	return (1);
}
