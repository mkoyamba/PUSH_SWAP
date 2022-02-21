/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:32:33 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/21 11:24:42 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_flag_c(va_list args, int *nb)
{
	unsigned char	c;

	c = (unsigned char)va_arg(args, int);
	write(1, &c, 1);
	*nb += 1;
}
