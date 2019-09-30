/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:59:21 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 10:00:13 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int num1;
    int num2;
    int res;
    char op;

    if (ac == 4)
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[3]);
        op = av[2][0];
        res = 0;

        if (op == '+')
            res = num1 + num2;
        else if (op == '-')
            res = num1 - num2;
        else if ( op == '*')
            res = num1 * num2;
        else if (op == '/')
            res = num1 / num2;
        else if (op == '%')
            res = num1 % num2;
        printf("%d", res);
    }
    printf("\n");
    return (0);
}
