/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:21:39 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 11:24:59 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     is_power_of_2(unsigned int n)
{ 
    if (n == 0 || n == 1) 
        return 0; 
    while (n >= 2)
    {
        if (n % 2 != 0)
                return (0);
        n = n / 2;
    }
    return (1);
} 

    
int main()
{
    printf("%d\n", is_power_of_2(8));
    printf("%d\n", is_power_of_2(32));
    printf("%d\n", is_power_of_2(64));
    printf("%d\n", is_power_of_2(0));
    printf("%d\n", is_power_of_2(1));
    printf("%d\n", is_power_of_2(40));
    printf("%d\n", is_power_of_2(21));
    return (0);
}
