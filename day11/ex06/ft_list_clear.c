/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:01:54 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 18:08:55 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *remove;

	while (*begin_list)
	{
		remove = *begin_list;
		*begin_list = (*begin_list)->next;
		free(remove);
	}
	begin_list = 0;
}
