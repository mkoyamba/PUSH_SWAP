/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:09:57 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/28 13:52:09 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_stack(t_data *main_data, int start, int end)
{
	while (start < end)
	{
		ft_printf("%i\n", main_data->stack[start]);
		start++;
	}
}

int	main(int argc, char **argv)
{
	t_data	*main_data;

	if (argc < 2 || argv[1][0] == '\0')
		exit (0);
	if (!check_argv(argv, argc))
		stop_error();
	main_data = main_init(argv, argc);
	swap_stack(main_data);
	if (main_data->len > 5)
		push_swap(main_data);
	else if (main_data->len > 1)
		small_push_swap(main_data);
	stack_free(main_data, 0);
	return (0);
}
