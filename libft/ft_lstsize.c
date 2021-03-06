/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:25:54 by mkoyamba          #+#    #+#             */
/*   Updated: 2021/10/09 16:34:55 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		n;
	t_list	*index;

	if (!lst)
		return (0);
	n = 1;
	index = lst;
	while (index->next != NULL)
	{
		n++;
		index = index->next;
	}
	return (n);
}
