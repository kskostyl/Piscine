/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:56:18 by kskostyl          #+#    #+#             */
/*   Updated: 2018/11/05 17:46:23 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_len(char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	j;
	char	*str2;
	int		i;

	j = 0;
	i = ft_len(src);
	str2 = (char *)malloc(sizeof(char) * (i + 1));

	while (src[j])
	{
		str2[j] = src[j];
		j++;
	}
	str2[j] = src[i];
	return (str2);
}

int		main()
{
	char *src;

	src = "Hello";
	printf("%s\n", ft_strdup("fgjoithjoi"));
	return (0);
}
