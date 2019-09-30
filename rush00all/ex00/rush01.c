/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 02:28:43 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/27 02:36:39 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	while (h <= y - 1)
	{
		while (w <= x - 1)
		{
			if ((w == 0 && h == 0) ||
				(w == x - 1 && h == y - 1 && y != 1 && x != 1))
				ft_putchar('/');
			else if ((w == 0 && h == y - 1) || (w == x - 1 && h == 0))
				ft_putchar((char)92);
			else if (w == 0 || w == x - 1 || h == 0 || h == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			w++;
		}
		w = 0;
		ft_putchar('\n');
		h++;
	}
}
