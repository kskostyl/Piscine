/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:12:13 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/31 18:20:34 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (*str)
	{
		l++;
		str++;
	}
	return (l);
}

char	*ft_strdup(char *src)
{
	char	*d;
	int		i;

	i = 0;
	d = (char*)malloc(ft_strlen(src) + 1 * sizeof(char));
	while (src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
