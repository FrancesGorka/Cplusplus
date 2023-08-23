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

void	ft_swap(int *a, int *b)
{
	int b1 = *b;
	int a1 = *a;
	*a = b1;
	*b = a1;
}

int	main(void)
{
	int	i = 10;
	int 	j = 9;
	int*	pi = &i; //sets a pointer whose value is the memory address of integer i
	int*	pj = &j; //sets a pointer whose value is the memory address of integer j
	ft_swap(pi,pj);
	printf("The value of i is %d",i); 
	printf("the value of j is %d",j);
	return (0);
}
