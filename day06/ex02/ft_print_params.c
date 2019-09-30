/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:36:50 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/31 22:27:31 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

int		main(int argc, char **argv)
{
	int		i;
	int		a;

	i = 1;
	while (i < argc)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			ft_putchar(argv[i][a]);
			a++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
