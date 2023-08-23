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

void	ft_sort_int_tab(int *tab, int size)
{
	int j = 1;
	int i = 0;
	while(i<size)
	{
		while(j < size)
		{
			if(*(tab+j+i)<*(tab+i))
			{
			ft_swap(&*(tab+j),&*tab);
			}
		j++;
		}
	j = 1;		
	i++;
	}
}

int	main(void)
{
	int arr[] = {6,2,9,4};
	int k = 4;
	int i = 0;
	int* parr = arr;
	ft_sort_int_tab(parr, k);
	while(i<k)
	{
	printf("%i",arr[i]);
	i++;
	}
	return (0);
}
