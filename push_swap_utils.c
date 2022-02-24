/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:48:32 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 14:33:24 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stop_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

void	stack_free(t_data *main_data)
{
	free(main_data->stack);
	free(main_data);
	stop_error();
}
