/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 22:10:01 by kskostyl          #+#    #+#             */
/*   Updated: 2018/10/30 22:18:29 by kskostyl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
	//if he nr of arg is not 3
	
	if(ac != 4)
	{
		write(1, "\n", 1);
		return 0;
	}

	//if 2nd and 3rd arg are not letters
	
	if(av[2][1] != '\0' || av[3][1] != '\0')
	{
		write(1, "\n", 1);
		return 0;
	}
	int i;
	i = 0;
	
	//search and replace

	while(av[1][i] != '\0')
	{
		if(av[1][i] == av[2][0])
			av[1][i] = av[3][0];
		
		write(1, &av[1][i], 1);
		i++;
	}
	
	write(1, "\n", 1);
	return 0;
