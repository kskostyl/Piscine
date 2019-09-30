/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:01:10 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/28 13:13:51 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int	w;
	int h;

	w = 0;
	h = 0;
	while (h <= y - 1)
	{
		while (w <= x - 1)
		{
			if ((w == 0 && h == 0) ||
				(w == x - 1 && h == y - 1 && y != 1 && x != 1))
				ft_putchar('A');
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == 0))
				ft_putchar('C');
			else if (w == 0 || w == x - 1 || h == 0 || h == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			w++;
		}
		w = 0;
		ft_putchar('\n');
		h++;
	}
}
