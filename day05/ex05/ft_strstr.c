/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 13:30:01 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/30 09:15:14 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	k;
	unsigned int	i;

	if (to_find != '\0')
		return (str);
	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[k + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return (&str[k]);
		}
		k++;
	}
	return (0);
}
