/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:59:46 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/30 23:51:18 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		a;
	int		b;

	i = argc - 1;
	a = 1;
	while (i > 0)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		ft_putchar('\n');
		i--;
		a++;
	}
	return (0);
}
