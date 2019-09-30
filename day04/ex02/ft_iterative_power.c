/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 03:16:42 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/27 03:21:34 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterstive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}
