/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 01:05:53 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/30 01:20:21 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 2)
	{
		write(1, "z\n", 2);
	}
	else
	while (av[1][i])
	{
		if (av[1][i] != 'z')
			i++;
		else
		{
			write(1, "z", 1);
			break;
		}
		write(1, "\n", 1);
	}
	return (0);
    
    
    char *s;
    int i;
    
    if (ac != 2)
	{
		write(1, "z\n", 2);
	}
    i = 0;
    s = av[1];
    while (s[i])
    {
        if (s[i] == 'z')
        {
            write(1, "z", 1);
            break ;
        }
        i += 1;
    }
    write(1, "\n", 1);
}

			
