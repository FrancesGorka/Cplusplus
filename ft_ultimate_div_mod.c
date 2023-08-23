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

void	ft_ultimate_div_mod(int *a, int *b)
{
	int c = *a/ *b; //assumes b is non zero
	int d = *a % *b;
	*a = c;
	*b = d;
}

int	main(void)
{
	int i = 80;
	int j = 9;
	int* pi = &i;
	int* pj = &j;
	ft_ultimate_div_mod(pi,pj);
	printf("%i and %i",i,j);
	return (0);
}
