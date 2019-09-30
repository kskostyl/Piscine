/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:34:12 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 09:35:24 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        write(1, &str[i++], 1);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int match;
    
    match  = 0;
    if (ac == 3)
    {
        i = 0;
        j = 0;
        
        while (av[1][i])
        {
            while (av[2][j] != av[1][i] && av[2][j] != '\0')
            {
                j++;
            }
            
            if (av[2][j] == av[1][i])
            {
                if (av[1][i+1] == '\0')
                {
                    match = 1;
                    break;
                }
                else
                    i++;
            }
            else
            {
                match = 0;
                break;
            }
        }
    }
    if (match == 1)
        ft_putstr(av[1]);
    
    write(1, "\n", 1);
    return (0);
}

