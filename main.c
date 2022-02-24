/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:09:57 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 12:11:48 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(t_data *main_data)
{
	int	n;

	n = 0;
	while (n < main_data->len)
	{
		ft_printf("%i\n", main_data->stack[n]);
		n++;
	}
}

int	main(int argc, char **argv)
{
	t_data	*main_data;

	
	if (argc < 2 || !check_argv(argv, argc))
		stop_error();
	main_data = main_init(argv, argc);
	display_stack(main_data);
	stack_index(main_data);
	ft_printf("\n============\n\n");
	display_stack(main_data);
	//push_swap(stack_a);
	return (0);
}
