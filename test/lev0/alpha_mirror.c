/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 08:39:35 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 08:40:38 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_mirror (char c)
{
	char b;
	char res;

    if (c >= 'a' && c <= 'z')
    {
        b = c - 'a';
        res = 'z' - b;
        return (res);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        b = c - 'A';
        res = 'Z' - b;
        return (res);
    }
    else
        return (c);
}

int main (int ac, char **av) 
{
    int i;
    char r;

    if (ac != 2)
    {
        write (1, "\n", 1);
    }
    else 
        {
            i = 0;
            while (av[1][i])
            {
                r = ft_mirror(av[1][i]);
                write (1, &r, 1);
                i++;
            }
            write (1, "\n", 1);
        }
        return (0);
}

