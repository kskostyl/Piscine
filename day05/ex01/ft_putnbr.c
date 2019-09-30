/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:05:39 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/29 10:52:12 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
	{
		unb = nb * -1;
		ft_putchar('-');
	}
	else
		unb = nb;
	if (unb >= 10)
		ft_putnbr(unb / 10);
	ft_putchar(unb % 10 + '0');
}
