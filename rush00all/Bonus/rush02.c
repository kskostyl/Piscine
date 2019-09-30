/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chjeong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:24:33 by chjeong           #+#    #+#             */
/*   Updated: 2018/10/28 11:02:14 by chjeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush02(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if ((row == 1) && (col == 1 || col == x))
				ft_putchar('A');
			else if ((row == x) && (col == 1 || col == x))
				ft_putchar('C');
			else if (row == 1 || row == x || col == 1 || col == y)
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
