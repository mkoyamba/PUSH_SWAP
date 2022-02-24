/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:34:32 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 20:00:11 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pb(t_data *main_data)
{
	int	temp;
	int	n;

	n = 0;
	if (main_data->sep < 2)
		return ;
	temp = main_data->stack[0];
	main_data->sep -= 1;
	while (n < main_data->sep)
	{
		main_data->stack[n] = main_data->stack[n + 1];
		n++;
	}
	main_data->stack[main_data->sep] = temp;
	ft_printf("pb\n");
}

void	move_pa(t_data *main_data)
{
	int	temp;
	int	n;

	n = main_data->sep;
	if (main_data->sep == main_data->len)
		return ;
	temp = main_data->stack[main_data->sep];
	main_data->sep += 1;
	while (n > 0)
	{
		main_data->stack[n] = main_data->stack[n - 1];
		n--;
	}
	main_data->stack[0] = temp;
	ft_printf("pa\n");
}