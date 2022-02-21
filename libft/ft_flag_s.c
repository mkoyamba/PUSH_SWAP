/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:32:45 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/02/21 11:27:37 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_flag_s(va_list args, int *nb)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
		*nb = *nb + write(1, "(null)", 6);
	else
		*nb = *nb + write(1, str, ft_strlen(str));
}
