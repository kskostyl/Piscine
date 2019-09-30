/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:28:04 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 19:49:30 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		i;
	unsigned char	temp;
	unsigned char	reversed;

	i = -1;
	reversed = 0;
	while (++i < 8)
	{
		reversed <<= 1;
		temp = (octet & 1);
		octet >>= 1;
		reversed |= temp;
	}
	return (reversed);
}

unsigned char	reverse_bits(unsigned char octet);
#include <stdlib.h>
#include <stdio.h>

int        main(int argc, char *av[])
{
    (void)argc;
    printf("reverse_bits\nBefore:\n\n %d\n", atoi(av[1]));
    printf("reverse_bits\nAfter:\n\n %d\n", reverse_bits(atoi(av[1])));
    return 0;
}
