/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:26:21 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 09:27:23 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     max(int* tab, unsigned int len)
{
    int max;
    unsigned int i;

    if (len == 0)
        return (0);

    i = 1;
    max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
                max = tab[i];
        i++; 
    }
    return (max);
}

int main()
{
    int array[5] = {3,97,344,234,2};
    printf("%d\n", max(array, 5));
    return (0);
}
