/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:52:23 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 17:53:01 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char ft_search(char letter, char **av)
{
    int i;

    i = 0;
    while (av[2][i])
        {
            if (av[2][i] == letter)
                return (1);
            i++;
        }
        return (0);
}
int main(int ac, char **av)
{
    int i;
    char res[127] = {0};

    if(ac == 3)
    {
        i = 0;
        while (av[1][i])
        {
            if (ft_search(av[1][i], av) == 1 && res[(int)av[1][i]] == 0)
            {
                ft_putchar(av[1][i]);
                res[(int)av[1][i]] = 1;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}
