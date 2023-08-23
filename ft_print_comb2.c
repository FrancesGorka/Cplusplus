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

void	ft_write(char arr1[], char arr2[])
{
	char	s;
	char	c;

	s = 32;
	c = 44;
	if (arr1[0] <= arr2[0] && arr1[1] < arr2[1])
	{
		write(1, arr1, 2);
		write(1, &s, 1);
		write(1, arr2, 2);
		if (!(arr1[0] == 57 && arr2[0] == 57 && arr1[1] == 56 && arr2[1] == 57))
		{	
			write(1, &s, 1);
			write(1, &c, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	char	stra[2];
	char	strb[2];

	stra[0] = 47;
	while (++stra[0] < 58)
	{
		stra[1] = 47;
		while (++stra[1] < 58)
		{
			strb[0] = 47;
			while (++strb[0] < 58)
			{
				strb[1] = 48;
				while (++strb[1] < 58)
				{
					ft_write(stra, strb);
				}
			}
		}
	}
}
