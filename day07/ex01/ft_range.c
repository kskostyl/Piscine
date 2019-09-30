/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:21:39 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/31 18:45:24 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*kk;
	int		i;

	if (min >= max)
		return (0);
	kk = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		kk[i] = min;
		i++;
		min++;
	}
	return (kk);
}
