/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:33:25 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/25 18:17:01 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int h;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			h = j + 1;
			while (h <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(h + 48);
				ft_putchar(',');
				ft_putchar(' ');
				h++;
			}
			j++;
		}
		i++;
	}
}
