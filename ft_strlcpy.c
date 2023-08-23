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

void	ft_copy(char *a, char *b)
{
	char b1 = *b;
	*a = b1;
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) 
{
	int i = 0;
	while(*dest != '\0')
	{
		if(*src != '\0' && i < size - 1)
		{
			ft_copy(dest, src);
		}
		else 
		{
		char b1 = '\0';
		*dest = b1;
		}
	*src++;
	*dest++;
	i++;
	}
	return(size);
}
  
int	main(void)
{	
	int n = 23;
	char stra[] = "Here is a string";
	char strb[] = "Let's copy this string"; 
	char* pstra = stra;
	char* pstrb = strb;
	ft_strlcpy(pstra, pstrb, n);
	write(1,stra,n);
}
