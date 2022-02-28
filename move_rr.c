/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:34:28 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/28 13:10:00 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_data *main_data)
{
	int	temp;
	int	n;

	n = 0;
	if (main_data->sep < 2)
		return ;
	temp = main_data->stack[0];
	while (n < main_data->sep - 1)
	{
		main_data->stack[n] = main_data->stack[n + 1];
		n++;
	}
	main_data->stack[main_data->sep - 1] = temp;
	ft_printf("ra\n");
}

void	move_rra(t_data *main_data)
{
	int	temp;
	int	n;

	n = main_data->sep - 1;
	if (main_data->sep < 2)
		return ;
	temp = main_data->stack[n];
	while (n > 0)
	{
		main_data->stack[n] = main_data->stack[n - 1];
		n--;
	}
	main_data->stack[0] = temp;
	ft_printf("rra\n");
}
