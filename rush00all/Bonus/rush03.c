/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:40:25 by chjeong           #+#    #+#             */
/*   Updated: 2018/10/28 11:03:37 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if ((row == 1 || row == y) && (col == 1))
				ft_putchar('A');
			else if ((row == 1 || row == y) && (col == x))
				ft_putchar('C');
			else if (col == 1 || col == x || row == 1 || row == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		col = 1;
		ft_putchar('\n');
		row++;
	}
}
