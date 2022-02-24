/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:14:15 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 14:34:43 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_argv(char **av, int ac)
{
	int		i;
	size_t	n;

	i = 1;
	n = 0;
	if (ac == 2)
		return (check_two_arg(av[1]));
	while (i < ac)
	{
		while (n < ft_strlen(av[i]))
		{
			if (av[i][n] == '+' || av[i][n] == '-')
				n++;
			if (!av[i][n] || !ft_isdigit(av[i][n]))
				return (0);
			n++;
		}
		n = -1;
		i++;
	}
	return (1);
}

int	check_atoi(char **data)
{
	int	n;

	n = 0;
	while (data[n])
	{
		if (ft_atoi(data[n]) == 0 && data[n][0] != '0')
		{
			data_free(data, 1);
			return (0);
		}
		n++;
	}
	return (1);
}

static int	same_string(char *s1, char *s2)
{
	size_t	n;

	n = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (n < ft_strlen(s1))
	{
		if (s1[n] != s2[n])
			return (0);
		n++;
	}
	return (1);
}

int	check_stack_double(char **data)
{
	size_t	n;
	size_t	i;

	n = 0;
	while (data[n])
	{
		i = n + 1;
		while (data[i])
		{
			if (same_string(data[n], data[i]) && i != n)
				data_free(data, 1);
			i++;
		}
		n++;
	}
	return (1);
}
