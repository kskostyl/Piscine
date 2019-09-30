/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 21:13:07 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/11 21:23:25 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval.h"

int		calcul(int	c, char *d, int e)
{
	if (d[0] == '+')
		return (c + e);
	if (d[0] == '-')
		return (c - e);
	if (d[0] == '*')
		return (c * e);
	if (d[0] == '/')
		return (c / e);
	if (d[0] == '%')
		return (c % e);
	return (0);
}

int		calcul_par(t_btree *node)
{
	int		k;
	int		q;
	int		res;

	if (node)
	{
		if (ft_str_is_num(node -> value))
			return (atoi(node -> value));
		else
		{
			k = calcul_par(node -> left);
			q = calcul_par(node -> right);
			res = calcul(k, node -> value, q);
			return (res);
		}
	}
	return (0);
}
