/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:59:47 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/10 19:00:03 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>


int main(int argc, char **argv)
{
    int i;
    int position;

    i = 0;
    if (argc != 2)
        write(1, "\n", 1);
    else
        {
            while (argv[1][i] != '\0')
            {
                if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                {
                    position = argv[1][i] - 96;
                    while (position > 0)
                    {

                        write(1, &argv[1][i], 1);
                        position--;
                    }
                    
                }
                else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')   
                {
                     position = argv[1][i] - 64;
                    while (position > 0)
                    {

                        write(1, &argv[1][i], 1);
                        position--;
                    }
                }
                else
                {
                    write(1, &argv[1][i], 1);
                }
                i++;

            }
            write(1, "\n", 1);
        }
}
