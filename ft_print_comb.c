/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgorka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:34:26 by fgorka            #+#    #+#             */
/*   Updated: 2023/03/03 13:10:17 by fgorka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_write(char i, char j, char k)
{
	char	c;
	char	s;

	c = 44;
	s = 32;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (!(i == 55 && j == 56 && k == 57))
	{
		write(1, &c, 1);
		write(1, &s, 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = 47;
	j = 48;
	k = 49;
	while (++i < 58)
	{
		while (++j < 58)
		{
			while (++k < 58)
			{
				if (i < j && j < k)
				{
					ft_write(i, j, k);
				}
			}
			k = 48;
		}
		j = 48;
	}
}
