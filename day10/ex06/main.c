/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 21:11:46 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 21:12:09 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	if (nb < 10)
		ft_putchar(nb % 10 + '0');
}

int		ft_atoi(char *str)
{
	int index;
	int ch;
	int sign;

	index = 0;
	ch = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == '\n' || str[index] == '\t'
		|| str[index] == '\f' || str[index] == '\r' || str[index] == '\v')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	if (str[index] >= '0' && str[index] <= '9')
		while (str[index] >= '0' && str[index] <= '9')
		{
			ch = ch * 10 + (str[index] - '0');
			index++;
		}
	else
		return (0);
	return (ch * sign);
}

int		main(int argc, char **argv)
{
	int	i;
	int	r;

	i = 0;
	if (argc == 4 || argv[2][1] == '\0')
	{
		if (argv[2][0] == '+')
			r = ft_atoi(argv[1]) + ft_atoi(argv[3]);
		if (argv[2][0] == '-')
			r = ft_atoi(argv[1]) - ft_atoi(argv[3]);
		if (argv[2][0] == '/')
			r = ft_atoi(argv[1]) / ft_atoi(argv[3]);
		if (argv[2][0] == '*')
			r = ft_atoi(argv[1]) * ft_atoi(argv[3]);
		if (argv[2][0] == '%')
			r = ft_atoi(argv[1]) % ft_atoi(argv[3]);
		ft_putnbr(r);
	}
	else
		return (0);
}
