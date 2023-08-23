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

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c = a/b; //assumes b is non zero
	int d = a%b;
	*div = c;
	*mod = d;
}

int	main(void)
{
	int	i = 100;
	int 	j = 3;
	int 	k = 0;
	int	l = 1;
	int*	pk = &k;
	int*	pl = &l;
	ft_div_mod(i, j, pk, pl);
	printf("%i %i",k, l);
	return (0);
}
