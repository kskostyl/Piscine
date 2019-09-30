/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 19:56:17 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 20:14:08 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	temp;

	temp = (octet & 240);
	temp >>= 4;
	octet <<= 4;
	octet |= temp;
	return (octet);
}

unsigned char	swap_bits(unsigned char octet);
#include <stdlib.h>
#include <stdio.h>

int        main(int argc, char *av[])
{
    (void)argc;
    printf("swap_bits\nBefore:\n\n %d\n", atoi(av[1]));
    printf("swap_bits\nAfter:\n\n %d\n", swap_bits(atoi(av[1])));
    return 0;
}
