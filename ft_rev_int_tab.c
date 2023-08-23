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

void	ft_rev_int_tab(int *tab, int size)
{
	int i = -1;
	int new_array[size];
	while(i++<size)
	{
		new_array[i] = *tab + size - i - 1;
	}
	int* pnew_array = new_array;
	*tab = *pnew_array; 
}

int	main(void)
{
	int arr[] = {1,2,3,4};
	int* parr = arr;
	int k = 4;
	int i = 0;
	ft_rev_int_tab(parr, k);
	while(i<k)
	{
	printf("%i",arr[i]);
	i++;
	}
	return (0);
}
