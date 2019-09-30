/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 21:55:51 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/26 23:18:30 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int num;
	int is_neg;

	i = 0;
	num = 0;
	is_neg = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
			i++;
		if (str[i] == '-')
			is_neg = 1;
		if (str[i] >= '0' && str[i] <= '9')
			num = num * 10;
			num = num + (str[i] - '0');
		
		i++;
	}
	return ((is_neg == 1) ? (-1 * num) : num))
}
