/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgorka <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:34:26 by fgorka            #+#    #+#             */
/*   Updated: 2023/03/02 15:34:52 by fgorka           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_unwritable_to_hex(int k)
{
	if(k < 10)
	{
		write(1,&k,1);
	}
	if (k/16 == 48)
	{
		int i = 48;
		write(1,&i,1);
		int j = 55 + k;
		write(1,&j,1);
	}
	else
	{
		int i = 48 + k/16;
		write(1,&i,1);
		int j = k/16;
		int l = k - j*16;
		int m = 55 + l;
		write(1, &m, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while(*str != '\0')
	{
		if(*str < 32)
		{
			int k = *str;
			int i = 92;
			write(1,&i,1);
			ft_unwritable_to_hex(k);
		}
		else
		{
			write(1,&*str,1);
		}
	*str++;
	}
}
  
int	main(void)
{	
	int k = 28;
	char str[] = "Coucou\ntu vas bien ?";
	char c = 10;
	char* pstr = str;
	ft_putstr_non_printable(pstr);
}
