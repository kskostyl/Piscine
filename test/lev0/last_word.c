/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:19:54 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 18:22:38 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		main(int ac, char *av[])
{
	int		i;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (av[1][i])
		{
			i++;
		}
		i--;
		while (i >= 0)
		{
			if (av[1][i] == '\t' || av[1][i] == ' ')
			{
				break;
			}
			else 
			{
				i--;
		//	write(1, &av[1][i], 1);
			}
		}
		i++;
		while (av[1][i] && !(av[1][i] == '\t' || av[1][i] == ' '))
		{
			//if (av[1][i] == '\t' || av[1][i] == ' ') 
			//	break;
		//	else
			write(1, &av[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}