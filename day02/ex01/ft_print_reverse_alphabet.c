/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:52:12 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/25 18:12:59 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	c;
	int		i;

	c = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(c);
		c--;
		i++;
	}
}
