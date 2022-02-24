/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:40:41 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/24 13:55:09 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*  		==================(     INCLUDES     )==================		  */

# include "libft/libft.h"

/*  		==================(      MACROS      )==================		  */

typedef struct s_data
{
	int	*stack;
	int	sep;
	int	len;
}					t_data;

/*  		==================(    PROTOTYPES    )==================		  */

int		check_argv(char **av, int ac);
void	data_free(char **data, int state);
int		check_atoi(char **data);
t_data	*main_init(char **av, int ac);
int		check_atoi(char **data);
int		check_stack_double(char **data);
void	stop_error(void);
void	stack_free(t_data *main_data);
void	get_min(t_data *main_data, int index, int *new_stack);
void	get_max(t_data *main_data, int	*new_stack);
void	stack_index(t_data *main_data);
int		check_two_arg(char *str);

//TEST

void	display_stack(t_data *main_data);

#endif