/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:17:35 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/31 20:41:22 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		l;

	l = 0;
	while (*str++)
	{
		l++;
	}
	return (l);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		l;
	int		i;
	int		k;

	k = 0;
	i = 0;
	l = 0;
	while (++i < argc)
		l += ft_strlen(argv[i] + 1);
	str = (char*)malloc((l + 1) * sizeof(char));
	i = 0;
	l = 0;
	while (++i < argc)
	{
		while (argv[i][k])
			str[l++] = argv[i][k++];
		str[l] = '\n';
		l++;
		k = 0;
	}
	str[--l] = '\0';
	return (str);
}
