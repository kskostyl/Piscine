/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:14:35 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/06 11:17:33 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strrev(char *str)
{
    char    temp;
    int     i;
    int     b;
    
    i = 0;
    while (str[i])  //counting lengh
        i++;
    i--;           //reverse reading
    b = 0;
    while (i > b)
    {
        temp = str[i];
        str[i] = str[b];
        str[b] = temp;
        i--;
        b++;
    }
    return (str);
}

int main()
{
    char ksenia[100] = "worldhello";
    printf("%s\n", ft_strrev(ksenia));
    return (0);
}
