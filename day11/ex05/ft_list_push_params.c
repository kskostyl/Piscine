/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:44:13 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 17:58:38 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*elem;

	if (ac <= 0)
		return (NULL);
	i = 0;
	elem = NULL;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = elem;
		elem = list;
		++i;
	}
	return (list);
}
