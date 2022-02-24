/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:56:26 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 22:37:21 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_data *main_data)
{
	int		i;
	size_t	n;

	if (is_sorted(main_data))
		exit(0);
	n = 0;
	while (!is_sorted(main_data))
	{
		i = 0;
		while (i < main_data->len)
		{
			if (!((main_data->stack[0] >> n) & 1))
				move_pb(main_data);
			else if (main_data->sep < 2)
				break ;
			else
				move_ra(main_data);
			i++;
		}
		while (main_data->sep < main_data->len)
			move_pa(main_data);
		n++;
	}
}
