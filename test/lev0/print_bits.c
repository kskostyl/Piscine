/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:01:41 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 15:00:25 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	char	temp[9];
	int		i;

	i = 7;
	temp[8] = '\0';
	while (i > -1)
	{
		temp[i] = (octet & 1) + '0';
		octet >>= 1;
		i--;
	}
	i = 0;
	while (temp[i] != '\0')
	{
		write(1, &(temp[i]), 1);
		i++;
	}
}

int		main(int ac, char **av)
{
	(void)ac;
	print_bits(av[1][0]);
	return (0);
}
