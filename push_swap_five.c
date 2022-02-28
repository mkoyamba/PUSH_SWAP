/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_five.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 12:25:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/28 13:09:55 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_five(t_data *main_data)
{
	int	n;

	n = 0;
	if (main_data->stack[4] == 0)
	{
		move_rra(main_data);
		n = 1;
	}
	else if (main_data->stack[3] == 0)
	{
		move_rra(main_data);
		move_rra(main_data);
		n = 1;
	}
	while (main_data->stack[0] != 0 && n == 0)
		move_ra(main_data);
	move_pb(main_data);
	n = 0;
	while (n < main_data->sep)
	{
		main_data->stack[n] -= 1;
		n++;
	}
	small_four(main_data);
	move_pa(main_data);
}
