/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:24:37 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/04 20:23:53 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

char **input_sudoku(int ac, char **av)
{
	char	**sudoku;
	int		i;
	int		j;

	i = 1;
	sudoku = malloc(sizeof(char *) * 9);
	while (i < ac)
	{
		sudoku[i - 1] = malloc(sizeof(char) * 9);
		j = 0;
		while (j < 9)
		{
			if (av[i][j] == '.')
				sudoku[i - 1][j] = 0;
			else
				sudoku[i - 1][j] = av[i][j] - '0';
			j++;
		}
		i++;
	}
	return (sudoku);
}

void	print_sudoku(char **sudoku)
{
	int		x;
	int		y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putchar('0' + sudoku[y][x]);
			x++;
			if (x % 9 != 0)
				ft_putchar(' ');
		}
		y++;
		ft_putchar('\n');
	}
}

void	destroy_sudoku(char **sudoku)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		free(sudoku[i]);
	}
	free(sudoku);
}

int		main(int ac, char **av)
{
	char **sudoku;

	sudoku = input_sudoku(ac, av);

	if (input_sudoku(sudoku, 0, 0) == 0)
		ft_putstr("Error\n");
	else
		print_sudoku(sudoku);
	destroy_sudoku(sudoku);
	return (0);
}

