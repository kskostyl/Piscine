/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:22:25 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 20:23:12 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i;
    int j;
    char temp[127] = {0};

    if (ac == 3)
    {   
        i = 0;
        while (av[1][i])
        {   
            if (temp[(int)av[1][i]] == 0)
                {
                    write(1, &av[1][i], 1);
                    temp[(int)av[1][i]] = 1;           
                }
                i++;
        }
        j = 0;
        while (av[2][j])
        {
            if (temp[(int)av[2][j]] == 0)
                {
                    write(1, &av[2][j], 1);
                    temp[(int)av[2][j]] = 1;
                }
                j++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
