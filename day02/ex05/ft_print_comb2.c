/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:33:25 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/25 18:24:53 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	q;
	int	w;

	q = 0;
	while (q <= 98)
	{
		w = q + 1;
		while (w <= 99)
		{
			ft_putchar((q / 10) + '0');
			ft_putchar((q % 10) + '0');
			ft_putchar(' ');
			ft_putchar((w / 10) + '0');
			ft_putchar((w % 10) + '0');
			if (q != 98 || w != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			w++;
		}
		q++;
	}
}
